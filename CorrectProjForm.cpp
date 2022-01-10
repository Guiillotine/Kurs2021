#pragma once
#include <iostream>
#include <stdio.h>
#include <string>

#include "CorrectProjForm.h"
#include "PKDClass.h"
#include "RegZdClass.h"
#include <msclr\marshal_cppstd.h>
extern TableRegZd tableRegZd;
extern TablePKD tablePKD;
extern string fnamePKD;
extern string fnameLogin;

System::Void Kurs2021::CorrectProjForm::CorrectProjForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	dataGridView->Rows->Add();
	fstream f;
	string str;
	f.open(fnameLogin, fstream::in);
	if (!f.is_open())
	{
		MessageBox::Show("Не удалось открыть файл cо списком исполнителей для заполнения таблицы", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		CorrectProjForm::Close();
	}
	int k = 0;
	while (!f.eof())
	{
		str = "";
		getline(f, str);
		if (k) this->surname->Items->AddRange(gcnew cli::array< System::Object^  >(1) { gcnew String(str.c_str()) });
		getline(f, str);
		k++;
	}
	f.close();

	for (int i = 0; i < tableRegZd.GetRowsNum(); i++) this->taskNumber->Items->AddRange(gcnew cli::array< System::Object^  >(1) { gcnew String(tableRegZd.GetTableRow(i).GetTaskNumber().c_str()) });
}

System::Void Kurs2021::CorrectProjForm::button_in_back_Click(System::Object^ sender, System::EventArgs^ e)
{
    CorrectProjForm::Close();
    return System::Void();
}

System::Void Kurs2021::CorrectProjForm::button_in_ok_Click(System::Object^ sender, System::EventArgs^ e)
{
	RowPKD row;
	int f = 1;
	int numberStr = 0;
	using namespace System::Runtime::InteropServices;
	
	if (this->number->Text != "") numberStr = Convert::ToInt32(this->number->Text);
	else if (this->number->Text == "") {MessageBox::Show("Введите номер строки для редактирования", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); f = 0;}
	else if ((Convert::ToInt32(this->number->Text) > tablePKD.GetRowsNum()) || (Convert::ToInt32(this->number->Text) == 0)) {MessageBox::Show("Строки с данным номером нет в списке", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); f = 0;}

	msclr::interop::marshal_context context;
	std::string stringTaskNumber = context.marshal_as<std::string>(this->taskNumber->Text);
	if (this->taskNumber->Text != "  .") row.SetTaskNumber(stringTaskNumber);
	else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	std::string stringDateReg = context.marshal_as<std::string>(this->dateReg->Text);
	if (this->dateReg->Text != "  .  .") row.SetDateReg(stringDateReg);
	else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	std::string stringCipher = context.marshal_as<std::string>(this->cipher->Text);
	if (this->cipher->Text != "  -") row.SetCipher(stringCipher);
	else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	std::string stringProjName = context.marshal_as<std::string>(this->projName->Text);
	if (this->projName->Text != "") row.SetProjName(stringProjName);
	else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	std::string stringSurname = context.marshal_as<std::string>(this->surname->Text);
	if (this->surname->Text != "") row.SetSurname(stringSurname);
	else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	std::string stringDateEnd = context.marshal_as<std::string>(this->dateEnd->Text);
	if (this->dateEnd->Text == "  .  .") row.SetDateEnd("00.00.0000");
	else row.SetDateEnd(stringDateEnd);

	if (this->volume->Text == "")  row.SetVolume(0);
	else row.SetVolume(Convert::ToInt32(this->volume->Text));
	if (f)
	{
		tablePKD.EditStr(numberStr, row);
		if (tablePKD.Putfile(fnamePKD) == 0) MessageBox::Show("Не удалось открыть файл. Строка не отредактирована", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		dataGridView->Rows[0]->Cells[0]->Value = gcnew String(row.GetTaskNumber().c_str());
		dataGridView->Rows[0]->Cells[1]->Value = gcnew String(row.GetDateReg().c_str());
		dataGridView->Rows[0]->Cells[2]->Value = gcnew String(row.GetCipher().c_str());
		dataGridView->Rows[0]->Cells[3]->Value = gcnew String(row.GetProjName().c_str());
		dataGridView->Rows[0]->Cells[4]->Value = gcnew String(row.GetSurname().c_str());
		if (row.GetDateEnd() == "00.00.0000") dataGridView->Rows[0]->Cells[5]->Value = "     -------";
		else dataGridView->Rows[0]->Cells[5]->Value = gcnew String(row.GetDateEnd().c_str());
		dataGridView->Rows[0]->Cells[6]->Value = row.GetVolume().ToString();
		this->number->Text = L"";
	}
    return System::Void();
}
System::Void Kurs2021::CorrectProjForm::number_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	RowPKD row;
	int numberStr = 0;
	if (this->number->Text != "") numberStr = Convert::ToInt32(this->number->Text);  
	if ((numberStr <= tablePKD.GetRowsNum()) && (numberStr > 0))
	{
		this->taskNumber->Enabled = true;
		this->dateReg->Enabled = true;
		this->cipher->Enabled = true;
		this->projName->Enabled = true;
		this->surname->Enabled = true;
		this->dateEnd->Enabled = true;
		this->volume->Enabled = true;
		row = tablePKD.GetTableRow(numberStr - 1);
		this->taskNumber->Text = gcnew String(row.GetTaskNumber().c_str());
		this->dateReg->Text = gcnew String(row.GetDateReg().c_str());
		this->cipher->Text = gcnew String(row.GetCipher().c_str());
		this->projName->Text = gcnew String(row.GetProjName().c_str());
		this->surname->Text = gcnew String(row.GetSurname().c_str());
		this->dateEnd->Text = gcnew String(row.GetDateEnd().c_str());
		this->volume->Text = row.GetVolume().ToString();
	}
	else
	{
		this->taskNumber->Text = L"";
		this->dateReg->Text = L"";
		this->cipher->Text = L"";
		this->projName->Text = L"";
		this->surname->Text = L"";
		this->dateEnd->Text = L"";
		this->volume->Text = L"";
		this->taskNumber->Enabled = false;
		this->dateReg->Enabled = false;
		this->cipher->Enabled = false;
		this->projName->Enabled = false;
		this->surname->Enabled = false;
		this->dateEnd->Enabled = false;
		this->volume->Enabled = false;
	}
}
System::Void Kurs2021::CorrectProjForm::surname_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	e->Handled = true;
}
System::Void Kurs2021::CorrectProjForm::CorrectProjForm_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	e->Handled = true;
}
System::Void Kurs2021::CorrectProjForm::number_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyCode == Keys::Enter)
	{
		e->SuppressKeyPress = true;
		button_in_ok_Click(sender, e);
	}
}