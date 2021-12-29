#pragma once
#include <iostream>
#include <stdio.h>
#include <string>

#include "CorrectZdForm.h"
#include "RegZdClass.h"
#include <msclr\marshal_cppstd.h>
extern TableRegZd tableRegZd;
extern string fnameRegZd;
extern string fnameLogin;

System::Void Kurs2021::CorrectZdForm::CorrectZdForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	dataGridView->Rows->Add();
	fstream f;
	string str;

	f.open(fnameLogin, fstream::in);
	if (!f.is_open())
	{
		MessageBox::Show("Не удалось открыть файл cо списком исполнителей для заполнения таблицы", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		CorrectZdForm::Close();
	}
	int k = 0;
	while (!f.eof())
	{
		str = "";
		f >> str;
		if (k) this->surname->Items->AddRange(gcnew cli::array< System::Object^  >(1) { gcnew String(str.c_str()) });
		f >> str;
		k++;
	}
	f.close();

}

System::Void Kurs2021::CorrectZdForm::button_in_back_Click(System::Object^ sender, System::EventArgs^ e)
{
    CorrectZdForm::Close();
    return System::Void();
}

System::Void Kurs2021::CorrectZdForm::button_in_ok_Click(System::Object^ sender, System::EventArgs^ e)
{
	RowRegZd row;
	int f = 1;
	int numberStr = 0;
	using namespace System::Runtime::InteropServices;

	if (this->number->Text != "") numberStr = Convert::ToInt32(this->number->Text);
	else if (this->number->Text == "") { MessageBox::Show("Введите номер строки для редактирования", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); f = 0; }
	else if ((Convert::ToInt32(this->number->Text) > tableRegZd.GetRowsNum()) || (Convert::ToInt32(this->number->Text) == 0)) { MessageBox::Show("Строки с данным номером нет в списке", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); f = 0; }

	msclr::interop::marshal_context context;
	std::string stringTaskNumber = context.marshal_as<std::string>(this->taskNumber->Text);
	if (this->taskNumber->Text != "  .") row.SetTaskNumber(stringTaskNumber);
	else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	std::string stringDate = context.marshal_as<std::string>(this->date->Text);
	if (this->date->Text != "  .  .") row.SetDate(stringDate);
	else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	std::string stringCustomer = context.marshal_as<std::string>(this->customer->Text);
	if (this->customer->Text != "") row.SetCustomer(stringCustomer);
	else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	std::string stringTask = context.marshal_as<std::string>(this->task->Text);
	if (this->task->Text != "") row.SetTask(stringTask);
	else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	std::string stringProjNumber = context.marshal_as<std::string>(this->projNumber->Text);
	if (this->projNumber->Text != "  -") row.SetProjNumber(stringProjNumber);
	else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	std::string stringSurname = context.marshal_as<std::string>(this->surname->Text);
	if (this->surname->Text != "") row.SetSurname(stringSurname);
	else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	std::string stringStatus = context.marshal_as<std::string>(this->status->Text);
	if (this->status->Text != "") row.SetStatus(stringStatus);
	else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	std::string stringNote = context.marshal_as<std::string>(this->note->Text);
	if (this->note->Text != "") row.SetNote(stringNote);
	else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }
	if (f)
	{
		tableRegZd.EditStr(numberStr, row);
		if (tableRegZd.Putfile(fnameRegZd) == 0) MessageBox::Show("Не удалось открыть файл. Строка не отредактирована", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		dataGridView->Rows[0]->Cells[0]->Value = gcnew String(row.GetTaskNumber().c_str());
		dataGridView->Rows[0]->Cells[1]->Value = gcnew String(row.GetDate().c_str());
		dataGridView->Rows[0]->Cells[2]->Value = gcnew String(row.GetCustomer().c_str());
		dataGridView->Rows[0]->Cells[3]->Value = gcnew String(row.GetTask().c_str());
		dataGridView->Rows[0]->Cells[4]->Value = gcnew String(row.GetProjNumber().c_str());
		dataGridView->Rows[0]->Cells[5]->Value = gcnew String(row.GetSurname().c_str());
		dataGridView->Rows[0]->Cells[6]->Value = gcnew String(row.GetStatus().c_str());
		dataGridView->Rows[0]->Cells[7]->Value = gcnew String(row.GetNote().c_str());
		this->number->Text = L"";
	}
    return System::Void();
}
System::Void Kurs2021::CorrectZdForm::number_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	RowRegZd row;
	int numberStr = 0;
	if (this->number->Text != "") numberStr = Convert::ToInt32(this->number->Text);
	if ((numberStr <= tableRegZd.GetRowsNum()) && (numberStr > 0))
	{
		this->taskNumber->Enabled = true;
		this->date->Enabled = true;
		this->customer->Enabled = true;
		this->task->Enabled = true;
		this->projNumber->Enabled = true;
		this->surname->Enabled = true;
		this->status->Enabled = true;
		this->note->Enabled = true;
		row = tableRegZd.GetTableRow(numberStr - 1);
		this->taskNumber->Text = gcnew String(row.GetTaskNumber().c_str());
		this->date->Text = gcnew String(row.GetDate().c_str());
		this->customer->Text = gcnew String(row.GetCustomer().c_str());
		this->task->Text = gcnew String(row.GetTask().c_str());
		this->projNumber->Text = gcnew String(row.GetProjNumber().c_str());
		this->surname->Text = gcnew String(row.GetSurname().c_str());
		this->status->Text = gcnew String(row.GetStatus().c_str());
		this->note->Text = gcnew String(row.GetNote().c_str());
	}
	else
	{
		this->taskNumber->Text = L"";
		this->date->Text = L"";
		this->customer->Text = L"";
		this->task->Text = L"";
		this->projNumber->Text = L"";
		this->surname->Text = L"";
		this->status->Text = L"";
		this->note->Text = L"";
		this->taskNumber->Enabled = false;
		this->date->Enabled = false;
		this->customer->Enabled = false;
		this->task->Enabled = false;
		this->projNumber->Enabled = false;
		this->surname->Enabled = false;
		this->status->Enabled = false;
		this->note->Enabled = false;
	}
}
System::Void Kurs2021::CorrectZdForm::surname_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	e->Handled = true;
}