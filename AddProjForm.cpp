#pragma once
#include <iostream>
#include <stdio.h>
#include <string>

#include "AddProjForm.h"
#include "PKDClass.h"
#include "RegZdClass.h"
#include <msclr\marshal_cppstd.h>
using namespace System;
using namespace std;

extern int ix;
extern TablePKD tablePKD;
extern TableRegZd tableRegZd;
extern string fnamePKD;
extern string fnameList;
extern string fnameLogin;
extern string login;
extern int fmode;

System::Void Kurs2021::AddProjForm::AddProjForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	ix = 0;
	fstream f;
	string str;

	f.open(fnameLogin, fstream::in);
	if (!f.is_open())
	{
		MessageBox::Show("Не удалось открыть файл cо списком исполнителей для заполнения таблицы", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		AddProjForm::Close();
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
	if (!fmode)
	{
		for (int i = 0; i < tableRegZd.GetRowsNum(); i++)
		{
			if (tableRegZd.GetTableRow(i).GetSurname() == login)
			{
				this->taskNumber->Items->AddRange(gcnew cli::array< System::Object^  >(1) { gcnew String(tableRegZd.GetTableRow(i).GetTaskNumber().c_str()) });
			}
		}
	}
	else for (int i = 0; i < tableRegZd.GetRowsNum(); i++) this->taskNumber->Items->AddRange(gcnew cli::array< System::Object^  >(1) { gcnew String(tableRegZd.GetTableRow(i).GetTaskNumber().c_str()) });
}

System::Void Kurs2021::AddProjForm::buttonBack_Click(System::Object^ sender, System::EventArgs^ e)
{
    AddProjForm::Close();
    return System::Void();
}

System::Void Kurs2021::AddProjForm::buttonOk_Click(System::Object^ sender, System::EventArgs^ e)
{
	RowPKD row;
	int f = 1;
	using namespace System::Runtime::InteropServices;
	msclr::interop::marshal_context context;

	std::string stringTaskNumber = context.marshal_as<std::string>(this->taskNumber->Text);
	{
		if (this->taskNumber->Text != "") row.SetTaskNumber(stringTaskNumber);
		else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }
	}
	/*else
	{
		if (this->taskNumber->Text != "")
		{
			int k = tableRegZd.GetRowsNum();
			for (int i = 0; i < tableRegZd.GetRowsNum(); i++)
			{
				if ((tableRegZd.GetTableRow(i).GetTaskNumber() == stringTaskNumber) && (tableRegZd.GetTableRow(i).GetSurname() == login))
				{
					row.SetTaskNumber(stringTaskNumber);
					break;
				}
				if (i == tableRegZd.GetRowsNum() - 1) { MessageBox::Show("Номер задания указан неверно", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); f = 0; }
			}			
		}
		else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }
	}*/

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
	if ((this->surname->Text == "") && (f)) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }
	if ((this->surname->Text != gcnew String(login.c_str())) && (f) && (!fmode)) { f = 0; MessageBox::Show("Укажите свою фамилию в поле \"Исполнитель\"", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); }
	else row.SetSurname(stringSurname);

	std::string stringDateEnd = context.marshal_as<std::string>(this->dateEnd->Text);
	if (this->dateEnd->Text == "  .  .") row.SetDateEnd("00.00.0000");
	else row.SetDateEnd(stringDateEnd);

	if (this->volume->Text == "")  row.SetVolume(0);
	else row.SetVolume(Convert::ToInt32(this->volume->Text));
	if (f)
	{
		tablePKD.AddStr(row);
		if (row.Putfile(fnamePKD) == 0) MessageBox::Show("Не удалось открыть файл. Запись строки невозможна", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		dataGridView_in->Rows->Add();
		dataGridView_in->Rows[ix]->Cells[0]->Value = gcnew String(row.GetTaskNumber().c_str());
		dataGridView_in->Rows[ix]->Cells[1]->Value = gcnew String(row.GetDateReg().c_str());
		dataGridView_in->Rows[ix]->Cells[2]->Value = gcnew String(row.GetCipher().c_str());
		dataGridView_in->Rows[ix]->Cells[3]->Value = gcnew String(row.GetProjName().c_str());
		dataGridView_in->Rows[ix]->Cells[4]->Value = gcnew String(row.GetSurname().c_str());
		if (row.GetDateEnd() == "00.00.0000") dataGridView_in->Rows[ix]->Cells[5]->Value = "     -------";
		else dataGridView_in->Rows[ix]->Cells[5]->Value = gcnew String(row.GetDateEnd().c_str());
		dataGridView_in->Rows[ix]->Cells[6]->Value = row.GetVolume().ToString();
		ix++;
		this->taskNumber->Text = L"";
		this->dateReg->Text = L"";
		this->cipher->Text = L"";
		this->projName->Text = L"";
		this->surname->Text = L"";
		this->dateEnd->Text = L"";
		this->volume->Text = L"";
	}
    return System::Void();
}

System::Void Kurs2021::AddProjForm::surname_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	e->Handled = true;
}

System::Void Kurs2021::AddProjForm::taskNumber_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	e->Handled = true;
}

System::Void Kurs2021::AddProjForm::taskNumber_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyCode == Keys::Enter)
	{
		e->SuppressKeyPress = true;
		buttonOk_Click(sender, e);
	}
}
