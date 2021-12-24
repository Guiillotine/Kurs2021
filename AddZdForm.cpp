#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include <Windows.h>

#include "AddZdForm.h"
#include "RegZdClass.h"
#include <msclr\marshal_cppstd.h>
using namespace System;
using namespace std;


int f; // Флажок для вывода единственного сообщения о пропущенных полях
int ix; // Номер строки в таблице введённых строк
extern TableRegZd tableRegZd;

System::Void Kurs2021::AddZdForm::button_in_back_Click(System::Object^ sender, System::EventArgs^ e)
{
    AddZdForm::Close();
    return System::Void();
}

System::Void Kurs2021::AddZdForm::button_in_ok_Click(System::Object^ sender, System::EventArgs^ e)
{
	RowRegZd row;
    f = 1;
	using namespace System::Runtime::InteropServices;
	msclr::interop::marshal_context context;

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
	if (this->note->Text != "") row.SetNote(stringNote);
	else if (f) { f = 0; MessageBox::Show("Введены не все данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); }
	if (f) tableRegZd.AddStr(row);
	if (row.Putfile() == 0) MessageBox::Show("Не удалось открыть файл", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);

	if (f)
	{
		//putfile(pDIST3->name, pDIST3->fio, pDIST3->napr, pDIST3->kurs, pDIST3->chas, pDIST3->att, fname, 0);
		dataGridView_in->Rows->Add();
		dataGridView_in->Rows[ix]->Cells[0]->Value = gcnew String(row.GetTaskNumber().c_str());
		dataGridView_in->Rows[ix]->Cells[1]->Value = gcnew String(row.GetDate().c_str());
		dataGridView_in->Rows[ix]->Cells[2]->Value = gcnew String(row.GetCustomer().c_str());
		dataGridView_in->Rows[ix]->Cells[3]->Value = gcnew String(row.GetTask().c_str());
		dataGridView_in->Rows[ix]->Cells[4]->Value = gcnew String(row.GetProjNumber().c_str());
		dataGridView_in->Rows[ix]->Cells[5]->Value = gcnew String(row.GetSurname().c_str());
		dataGridView_in->Rows[ix]->Cells[6]->Value = gcnew String(row.GetStatus().c_str());
		dataGridView_in->Rows[ix]->Cells[7]->Value = gcnew String(row.GetNote().c_str());
		ix++;
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
System::Void Kurs2021::AddZdForm::AddZdForm_Load(System::Object^ sender, System::EventArgs^ e) {
	ix = 0;
}
