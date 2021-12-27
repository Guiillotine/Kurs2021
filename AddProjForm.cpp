#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include <Windows.h>

#include "AddProjForm.h"
#include "PKDClass.h"
#include <msclr\marshal_cppstd.h>
using namespace System;
using namespace std;


//extern int f; // Флажок для вывода единственного сообщения о пропущенных полях
extern int ix; // Номер строки в таблице введённых строк
extern TablePKD tablePKD;
extern string fnamePKD;

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
	if (this->taskNumber->Text != "") row.SetTaskNumber(stringTaskNumber);
	else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	std::string stringDateReg = context.marshal_as<std::string>(this->dateReg->Text);
	if (this->dateReg->Text != "") row.SetDateReg(stringDateReg);
	else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	std::string stringCipher = context.marshal_as<std::string>(this->cipher->Text);
	if (this->cipher->Text != "") row.SetCipher(stringCipher);
	else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	std::string stringProjName = context.marshal_as<std::string>(this->projName->Text);
	if (this->projName->Text != "") row.SetProjName(stringProjName);
	else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	std::string stringSurname = context.marshal_as<std::string>(this->surname->Text);
	if (this->surname->Text != "") row.SetSurname(stringSurname);
	else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	std::string stringDateEnd = context.marshal_as<std::string>(this->dateEnd->Text);
	if (this->dateEnd->Text == "") row.SetDateEnd("00.00.0000");
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
		dataGridView_in->Rows[ix]->Cells[5]->Value = gcnew String(row.GetDateEnd().c_str());
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
System::Void Kurs2021::AddProjForm::AddProjForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	ix = 0;
}
