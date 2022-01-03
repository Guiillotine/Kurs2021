#include <string>
#include "RequestZdForm.h"
#include "RegZdClass.h"
#include <msclr\marshal_cppstd.h>
using namespace System;
using namespace std;
extern TableRegZd tableRegZd;
extern string fnameLogin;

System::Void Kurs2021::RequestZdForm::RequestZdForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	fstream f;
	string str;
	f.open(fnameLogin, fstream::in);
	if (!f.is_open())
	{
		MessageBox::Show("Не удалось открыть файл cо списком исполнителей для заполнения таблицы", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		RequestZdForm::Close();
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

	/*fstream f;
	string str;
	f.open(fnameList, fstream::in | fstream::out | fstream::app);
	if (!f.is_open())
	{
		MessageBox::Show("Не удалось открыть файл cо списком исполнителей для заполнения таблицы", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		RequestZdForm::Close();
	}
	while (!f.eof())
	{
		getline(f, str);
		this->surname->Items->AddRange(gcnew cli::array< System::Object^  >(1) { gcnew String(str.c_str()) });
	}
	f.close();*/
}

System::Void Kurs2021::RequestZdForm::button_back_req_Click(System::Object^ sender, System::EventArgs^ e)
{
    RequestZdForm::Close();
    return System::Void();
}

System::Void Kurs2021::RequestZdForm::button_ok_req_Click(System::Object^ sender, System::EventArgs^ e)
{
	using namespace System::Runtime::InteropServices;
	msclr::interop::marshal_context context;
	RowRegZd row;
	int f = 0;
	while (dataGridView->Rows->Count != 0) dataGridView->Rows->Remove(dataGridView->Rows[dataGridView->Rows->Count - 1]);
	int ix = 0;

	for (int i = 0; i < tableRegZd.GetRowsNum(); i++)
	{
		row = tableRegZd.GetTableRow(i);
		if ((this->taskNumber->Text == "  .") || (row.GetTaskNumber() == context.marshal_as<std::string>(this->taskNumber->Text)));
		else continue;

		if ((this->date->Text == "  .  .") || (row.GetDate() == context.marshal_as<std::string>(this->date->Text)));
		else continue;

		if ((this->customer->Text == "") || (row.GetCustomer() == context.marshal_as<std::string>(this->customer->Text)));
		else continue;

		/*if ((this->task->Text == "") || (row.GetTask() == context.marshal_as<std::string>(this->task->Text)));
		else continue;*/

		if ((this->projNumber->Text == "  -") || (row.GetProjNumber() == context.marshal_as<std::string>(this->projNumber->Text)));
		else continue;

		if ((this->surname->Text == "") || (row.GetSurname() == context.marshal_as<std::string>(this->surname->Text)));
		else continue;

		if ((this->status->Text == "") || (row.GetStatus() == context.marshal_as<std::string>(this->status->Text)));
		else continue;

		/*if ((this->note->Text == "") || (row.GetNote() == context.marshal_as<std::string>(this->note->Text)));
		else continue;*/

		f = 1;
		dataGridView->Rows->Add();
		dataGridView->Rows[ix]->Cells[0]->Value = gcnew String(row.GetTaskNumber().c_str());
		dataGridView->Rows[ix]->Cells[1]->Value = gcnew String(row.GetDate().c_str());
		dataGridView->Rows[ix]->Cells[2]->Value = gcnew String(row.GetCustomer().c_str());
		dataGridView->Rows[ix]->Cells[3]->Value = gcnew String(row.GetTask().c_str());
		dataGridView->Rows[ix]->Cells[4]->Value = gcnew String(row.GetProjNumber().c_str());
		dataGridView->Rows[ix]->Cells[5]->Value = gcnew String(row.GetSurname().c_str());
		dataGridView->Rows[ix]->Cells[6]->Value = gcnew String(row.GetStatus().c_str());
		dataGridView->Rows[ix]->Cells[7]->Value = gcnew String(row.GetNote().c_str());
		ix++;
	}
	if (!f) MessageBox::Show("По вашему запросу результатов не найдено", "", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	return System::Void();
}
System::Void Kurs2021::RequestZdForm::surname_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	e->Handled = true;
}
System::Void Kurs2021::RequestZdForm::status_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	e->Handled = true;
}
System::Void Kurs2021::RequestZdForm::taskNumber_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyCode == Keys::Enter)
	{
		e->SuppressKeyPress = true;
		button_ok_req_Click(sender, e);
	}
}