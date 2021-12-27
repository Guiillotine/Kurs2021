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
	int f = 0, m = 0; //f - Флажок для вывода специального сообщения в случае отсутствия строк по запросу, m - Счётчик совпадений с запросом  
	while (dataGridView->Rows->Count != 0) dataGridView->Rows->Remove(dataGridView->Rows[dataGridView->Rows->Count - 1]);
	int ix = 0;

	for (int i = 0; i < tablePKD.GetRowsNum(); i++)
	{
		row = tablePKD.GetTableRow(i);
		if ((this->taskNumber->Text == "  .")|| (row.GetTaskNumber() == context.marshal_as<std::string>(this->taskNumber->Text)));//m++;
		else continue;

		if ((this->dateReg->Text == "  .  .")||(row.GetDateReg() == context.marshal_as<std::string>(this->dateReg->Text)));// m++;
		else continue;

		if ((this->cipher->Text == "  -")||(row.GetCipher() == context.marshal_as<std::string>(this->cipher->Text)));// m++;
		else continue;

		if ((this->projName->Text == "")||(row.GetProjName() == context.marshal_as<std::string>(this->projName->Text)));// m++;
		else continue;

		if ((this->surname->Text == "") || (row.GetSurname() == context.marshal_as<std::string>(this->surname->Text)));
		else continue;

		if ((this->dateEnd->Text == "  .  .") || (row.GetDateEnd() == context.marshal_as<std::string>(this->dateEnd->Text)));
		else continue;

		if (this->volume->Text != "")
		{
			if (this->sign->Text == "=") if (row.GetVolume() != Convert::ToInt32(this->volume->Text)) continue;
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
		dataGridView->Rows[ix]->Cells[5]->Value = gcnew String(row.GetDateEnd().c_str());
		dataGridView->Rows[ix]->Cells[6]->Value = row.GetVolume().ToString();
		ix++;
	}
	if (!f) MessageBox::Show("По вашему запросу результатов не найдено", "", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
    return System::Void();
}
