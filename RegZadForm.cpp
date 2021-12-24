#include "RegZadForm.h"
#include "PKDForm.h"
#include "Exp1.h"
#include "Exp2.h"
#include "Exp3.h"
#include "AddZadForm.h"
#include "CorrectZadForm.h"
#include "RequestZadForm.h"
#include "HelpForm.h"
#include "RegZadClass.h"
extern TableRegZad tableRegZad;

System::Void Kurs2021::RegZadForm::openPKDToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	PKDForm^ form = gcnew PKDForm();
	form->Show();
	RegZadForm::Hide();
    return System::Void();
}

System::Void Kurs2021::RegZadForm::æóðíàëÓ÷åòàÍîìåðîâÏÊÄToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Exp1^ form = gcnew Exp1();
	form->ShowDialog();
	return System::Void();
}

System::Void Kurs2021::RegZadForm::æóðíàëÓ÷åòàÂûïîëíåííîéÏÊÄToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Exp2^ form = gcnew Exp2();
	form->ShowDialog();
	return System::Void();
}

System::Void Kurs2021::RegZadForm::æóðíàëÐåãèñòðàöèèÇàäàíèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Exp3^ form = gcnew Exp3();
	form->ShowDialog();
	return System::Void();
}

System::Void Kurs2021::RegZadForm::äîáàâèòüÑòðîêóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	AddZadForm^ form = gcnew AddZadForm();
	form-> ShowDialog();
	return System::Void();
}

System::Void Kurs2021::RegZadForm::èçìåíèòüÑòðîêóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	CorrectZadForm^ form = gcnew CorrectZadForm();
	form->ShowDialog();
	return System::Void();
}

System::Void Kurs2021::RegZadForm::íàéòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	RequestZadForm^ form = gcnew RequestZadForm();
	form->ShowDialog();
	return System::Void();
}

System::Void Kurs2021::RegZadForm::ñïðàâêàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	HelpForm^ form = gcnew HelpForm();
	form->ShowDialog();
	return System::Void();
}

System::Void Kurs2021::RegZadForm::RegZadForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
	Application::Exit();
	return System::Void();
}

System::Void Kurs2021::RegZadForm::RegZadForm_Activated(System::Object^ sender, System::EventArgs^ e) 
{
	while (dataGridView1->Rows->Count != 0) dataGridView1->Rows->Remove(dataGridView1->Rows[dataGridView1->Rows->Count - 1]);
	for (int x = 0; x < tableRegZad.GetRowsNum(); x++)
	{
		//getfile(pDIST3->name, pDIST3->fio, pDIST3->napr, pDIST3->kurs, pDIST3->chas, pDIST3->att, fname, x);
		dataGridView1->Rows->Add();
		dataGridView1->Rows[x]->Cells[0]->Value = (x + 1).ToString();
		dataGridView1->Rows[x]->Cells[1]->Value = gcnew String(tableRegZad.GetTableRow(x).GetTaskNumber().c_str());
		dataGridView1->Rows[x]->Cells[2]->Value = gcnew String(tableRegZad.GetTableRow(x).GetDate().c_str());
		dataGridView1->Rows[x]->Cells[3]->Value = gcnew String(tableRegZad.GetTableRow(x).GetCustomer().c_str());
		dataGridView1->Rows[x]->Cells[4]->Value = gcnew String(tableRegZad.GetTableRow(x).GetTask().c_str());
		dataGridView1->Rows[x]->Cells[5]->Value = gcnew String(tableRegZad.GetTableRow(x).GetProjNumber().c_str());
		dataGridView1->Rows[x]->Cells[6]->Value = gcnew String(tableRegZad.GetTableRow(x).GetSurname().c_str());
		dataGridView1->Rows[x]->Cells[7]->Value = gcnew String(tableRegZad.GetTableRow(x).GetStatus().c_str());
		dataGridView1->Rows[x]->Cells[8]->Value = gcnew String(tableRegZad.GetTableRow(x).GetNote().c_str());

	}

}
