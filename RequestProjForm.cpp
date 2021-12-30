#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include "RequestProjForm.h"
#include "PKDClass.h"
#include <msclr\marshal_cppstd.h>
using namespace System;
using namespace std;
extern TablePKD tablePKD;
extern string fnameLogin;

System::Void Kurs2021::RequestProjForm::RequestProjForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	fstream f;
	string str;
	f.open(fnameLogin, fstream::in);
	if (!f.is_open())
	{
		MessageBox::Show("Не удалось открыть файл cо списком исполнителей для заполнения таблицы", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		RequestProjForm::Close();
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
System::Void Kurs2021::RequestProjForm::button_in_back_Click(System::Object^ sender, System::EventArgs^ e)
{
    RequestProjForm::Close();
    return System::Void();
}
System::Void Kurs2021::RequestProjForm::button_in_ok_Click(System::Object^ sender, System::EventArgs^ e)
{
	using namespace System::Runtime::InteropServices;
	msclr::interop::marshal_context context;
	RowPKD row;
	int f = 0;
	while (dataGridView->Rows->Count != 0) dataGridView->Rows->Remove(dataGridView->Rows[dataGridView->Rows->Count - 1]);
	int ix = 0;

	for (int i = 0; i < tablePKD.GetRowsNum(); i++)
	{
		row = tablePKD.GetTableRow(i);
		if ((this->taskNumber->Text == "  .")|| (row.GetTaskNumber() == context.marshal_as<std::string>(this->taskNumber->Text)));
		else continue;

		if ((this->dateReg->Text == "  .  .")||(row.GetDateReg() == context.marshal_as<std::string>(this->dateReg->Text)));
		else continue;

		if ((this->cipher->Text == "  -")||(row.GetCipher() == context.marshal_as<std::string>(this->cipher->Text)));
		else continue;

		if ((this->projName->Text == "")||(row.GetProjName() == context.marshal_as<std::string>(this->projName->Text)));
		else continue;

		if ((this->surname->Text == "") || (row.GetSurname() == context.marshal_as<std::string>(this->surname->Text)));
		else continue;

		if ((this->dateEnd->Text == "  .  .") || (row.GetDateEnd() == context.marshal_as<std::string>(this->dateEnd->Text)));
		else continue;

		if (this->volume->Text != "")
		{
			if ((this->sign->Text == "=")||(this->sign->Text == "")) if (row.GetVolume() != Convert::ToInt32(this->volume->Text)) continue;
			if (this->sign->Text == ">=") if (row.GetVolume() < Convert::ToInt32(this->volume->Text)) continue;
			if (this->sign->Text == "<=") if (row.GetVolume() > Convert::ToInt32(this->volume->Text)) continue;
		}
		f = 1;
		dataGridView->Rows->Add();
		dataGridView->Rows[ix]->Cells[0]->Value = gcnew String(row.GetTaskNumber().c_str());
		dataGridView->Rows[ix]->Cells[1]->Value = gcnew String(row.GetDateReg().c_str());
		dataGridView->Rows[ix]->Cells[2]->Value = gcnew String(row.GetCipher().c_str());
		dataGridView->Rows[ix]->Cells[3]->Value = gcnew String(row.GetProjName().c_str());
		dataGridView->Rows[ix]->Cells[4]->Value = gcnew String(row.GetSurname().c_str());
		if (row.GetDateEnd() == "00.00.0000") dataGridView->Rows[ix]->Cells[5]->Value = "     -------";
		else dataGridView->Rows[ix]->Cells[5]->Value = gcnew String(row.GetDateEnd().c_str());
		dataGridView->Rows[ix]->Cells[6]->Value = row.GetVolume().ToString();
		ix++;
	}
	if (!f) MessageBox::Show("По вашему запросу результатов не найдено", "", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
    return System::Void();
}
System::Void Kurs2021::RequestProjForm::sign_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	e->Handled = true;
}
System::Void Kurs2021::RequestProjForm::surname_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	e->Handled = true;
}
System::Void Kurs2021::RequestProjForm::taskNumber_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyCode == Keys::Enter)
	{
		button_in_ok_Click(sender, e);
	}
	e->Handled = true;
	e->SuppressKeyPress = true;
}
