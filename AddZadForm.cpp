#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include <Windows.h>

#include "AddZadForm.h"
#include "RegZadClass.h"
#include <msclr\marshal_cppstd.h>
using namespace System;
using namespace std;


int f; // ‘лажок дл€ вывода единственного сообщени€ о пропущенных пол€х
extern TableRegZad tableRegZad;

System::Void Kurs2021::AddZadForm::button_in_back_Click(System::Object^ sender, System::EventArgs^ e)
{
    AddZadForm::Close();
    return System::Void();
}

System::Void Kurs2021::AddZadForm::button_in_ok_Click(System::Object^ sender, System::EventArgs^ e)
{
	RowRegZad row;
    f = 1;
	using namespace System::Runtime::InteropServices;

	if (this->taskNumber->Text != "") row.SetTaskNumber(Convert::ToInt32(this->taskNumber->Text));
	else if (f) { f = 0; MessageBox::Show("¬ведены не все данные", "¬нимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	msclr::interop::marshal_context context;
	std::string stringDate = context.marshal_as<std::string>(this->date->Text);
	if (this->date->Text != "") row.SetDate(stringDate);
	else if (f) { f = 0; MessageBox::Show("¬ведены не все данные", "¬нимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	std::string stringCustomer = context.marshal_as<std::string>(this->customer->Text);
	if (this->customer->Text != "") row.SetCustomer(stringCustomer);
	else if (f) { f = 0; MessageBox::Show("¬ведены не все данные", "¬нимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	std::string stringTask = context.marshal_as<std::string>(this->task->Text);
	if (this->task->Text != "") row.SetTask(stringTask);
	else if (f) { f = 0; MessageBox::Show("¬ведены не все данные", "¬нимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	if (this->projNumber->Text != "") row.SetProjNumber(Convert::ToInt32(this->projNumber->Text)); //Int32::Parse(this->projNumber->Text)
	else if (f) { f = 0; MessageBox::Show("¬ведены не все данные", "¬нимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	std::string stringSurname = context.marshal_as<std::string>(this->surname->Text);
	if (this->surname->Text != "") row.SetSurname(stringSurname);
	else if (f) { f = 0; MessageBox::Show("¬ведены не все данные", "¬нимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	std::string stringStatus = context.marshal_as<std::string>(this->status->Text);
	if (this->status->Text != "") row.SetStatus(stringStatus);
	else if (f) { f = 0; MessageBox::Show("¬ведены не все данные", "¬нимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	std::string stringNote = context.marshal_as<std::string>(this->note->Text);
	if (this->note->Text != "") {
		row.SetNote(stringNote);
		String^ str1 = gcnew String(row.GetDate().c_str());
		String^ str2 = gcnew String(row.GetCustomer().c_str());
		String^ str3 = gcnew String(row.GetTask().c_str());
		String^ str4 = gcnew String(row.GetSurname().c_str());
		String^ str5 = gcnew String(row.GetStatus().c_str());
		String^ str6 = gcnew String(row.GetNote().c_str());
		MessageBox::Show(row.GetTaskNumber().ToString() + " " + str1 + " " + str2 + " " + str3 + " " + row.GetProjNumber().ToString() + " " + str4 + " " + str5 + " " + str6, "¬нимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else if (f) { f = 0; MessageBox::Show("¬ведены не все данные", "¬нимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	if (f) tableRegZad.AddStr(row);

    //AddZadForm::Close();
    return System::Void();

	//»з массива в текстбокс
	string str = "test";
	String^ str2 = gcnew String(str.c_str());
	//

}
