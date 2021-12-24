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


int f; // Флажок для вывода единственного сообщения о пропущенных полях
int ix; // Номер строки в таблице введённых строк
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
	msclr::interop::marshal_context context;

	/*if (this->taskNumber->Text != "") row.SetTaskNumber(Convert::ToInt32(this->taskNumber->Text));
	else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }*/
	std::string stringTaskNumber = context.marshal_as<std::string>(this->taskNumber->Text);
	if (this->taskNumber->Text != "") row.SetTaskNumber(stringTaskNumber);
	else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }
	
	std::string stringDate = context.marshal_as<std::string>(this->date->Text);
	if (this->date->Text != "") row.SetDate(stringDate);
	else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	std::string stringCustomer = context.marshal_as<std::string>(this->customer->Text);
	if (this->customer->Text != "") row.SetCustomer(stringCustomer);
	else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	std::string stringTask = context.marshal_as<std::string>(this->task->Text);
	if (this->task->Text != "") row.SetTask(stringTask);
	else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	/*if (this->projNumber->Text != "") row.SetProjNumber(Convert::ToInt32(this->projNumber->Text)); //Int32::Parse(this->projNumber->Text)
	else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }*/
	std::string stringProjNumber = context.marshal_as<std::string>(this->projNumber->Text);
	if (this->projNumber->Text != "") row.SetProjNumber(stringProjNumber);
	else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	std::string stringSurname = context.marshal_as<std::string>(this->surname->Text);
	if (this->surname->Text != "") row.SetSurname(stringSurname);
	else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	std::string stringStatus = context.marshal_as<std::string>(this->status->Text);
	if (this->status->Text != "") row.SetStatus(stringStatus);
	else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }

	std::string stringNote = context.marshal_as<std::string>(this->note->Text);
	if (this->note->Text != "") {
		row.SetNote(stringNote);
		String^ str1 = gcnew String(row.GetDate().c_str());
		String^ str2 = gcnew String(row.GetCustomer().c_str());
		String^ str3 = gcnew String(row.GetTask().c_str());
		String^ str4 = gcnew String(row.GetSurname().c_str());
		String^ str5 = gcnew String(row.GetStatus().c_str());
		String^ str6 = gcnew String(row.GetNote().c_str());
		//MessageBox::Show(row.GetTaskNumber().ToString() + " " + str1 + " " + str2 + " " + str3 + " " + row.GetProjNumber().ToString() + " " + str4 + " " + str5 + " " + str6, "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }
	if (f) tableRegZad.AddStr(row);

	if (f)
	{
		//putfile(pDIST3->name, pDIST3->fio, pDIST3->napr, pDIST3->kurs, pDIST3->chas, pDIST3->att, fname, 0);
		dataGridView_in->Rows->Add();
		//dataGridView_in->Rows[ix]->Cells[0]->Value = row.GetTaskNumber().ToString();
		dataGridView_in->Rows[ix]->Cells[0]->Value = gcnew String(row.GetTaskNumber().c_str());
		dataGridView_in->Rows[ix]->Cells[1]->Value = gcnew String(row.GetDate().c_str());
		dataGridView_in->Rows[ix]->Cells[2]->Value = gcnew String(row.GetCustomer().c_str());
		dataGridView_in->Rows[ix]->Cells[3]->Value = gcnew String(row.GetTask().c_str());
		//dataGridView_in->Rows[ix]->Cells[4]->Value = row.GetProjNumber().ToString();
		dataGridView_in->Rows[ix]->Cells[4]->Value = gcnew String(row.GetProjNumber().c_str());
		dataGridView_in->Rows[ix]->Cells[5]->Value = gcnew String(row.GetSurname().c_str());
		dataGridView_in->Rows[ix]->Cells[6]->Value = gcnew String(row.GetStatus().c_str());
		dataGridView_in->Rows[ix]->Cells[7]->Value = gcnew String(row.GetNote().c_str());
		ix++;
		// Очистка полей для заполнения
		this->taskNumber->Text = L"";
		this->date->Text = L"";
		this->customer->Text = L"";
		this->task->Text = L"";
		this->projNumber->Text = L"";
		this->surname->Text = L"";
		this->status->Text = L"";
		this->note->Text = L"";
	}
    return System::Void();

	//Из массива в текстбокс
	string str = "test";
	String^ str2 = gcnew String(str.c_str());
	//
}
System::Void Kurs2021::AddZadForm::AddZadForm_Load(System::Object^ sender, System::EventArgs^ e) {
	ix = 0;
}
