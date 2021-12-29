#include "RegZdForm.h"
#include "PKDForm.h"
#include "Exp1.h"
#include "Exp2.h"
#include "Exp3.h"
#include "AddZdForm.h"
#include "CorrectZdForm.h"
#include "RequestZdForm.h"
#include "HelpForm.h"
#include "RegZdClass.h"
extern TableRegZd tableRegZd;
extern int fmode;

System::Void Kurs2021::RegZdForm::RegZdForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	if (!fmode)
	{
		this->toolStripButtonAdd->Visible = false;
		this->toolStripButtonCorrect->Visible = false; 
		this->ðåäàêòèðîâàòüToolStripMenuItem->Visible = false;
	}
	if (tableRegZd.GetRowsNum() == 0) if (tableRegZd.Getfile(fnameRegZd) == 0) MessageBox::Show("Íå óäàëîñü îòêðûòü ôàéë", "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
	return System::Void();
}

System::Void Kurs2021::RegZdForm::openPKDToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	PKDForm^ form = gcnew PKDForm();
	form->Show();
	RegZdForm::Hide();
    return System::Void();
}

System::Void Kurs2021::RegZdForm::æóðíàëÓ÷åòàÍîìåðîâÏÊÄToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	tableRegZd.Putfile("file");
	Exp1^ form = gcnew Exp1();
	form->ShowDialog();
	return System::Void();
}

System::Void Kurs2021::RegZdForm::æóðíàëÓ÷åòàÂûïîëíåííîéÏÊÄToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Exp2^ form = gcnew Exp2();
	form->ShowDialog();
	return System::Void();
}

System::Void Kurs2021::RegZdForm::æóðíàëÐåãèñòðàöèèÇàäàíèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Exp3^ form = gcnew Exp3();
	form->ShowDialog();
	return System::Void();
}

System::Void Kurs2021::RegZdForm::äîáàâèòüÑòðîêóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	AddZdForm^ form = gcnew AddZdForm();
	form-> ShowDialog();
	return System::Void();
}

System::Void Kurs2021::RegZdForm::èçìåíèòüÑòðîêóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	CorrectZdForm^ form = gcnew CorrectZdForm();
	form->ShowDialog();
	return System::Void();
}

System::Void Kurs2021::RegZdForm::íàéòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	RequestZdForm^ form = gcnew RequestZdForm();
	form->ShowDialog();
	return System::Void();
}

System::Void Kurs2021::RegZdForm::ñïðàâêàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	HelpForm^ form = gcnew HelpForm();
	form->ShowDialog();
	return System::Void();
}

System::Void Kurs2021::RegZdForm::RegZdForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
	Application::Exit();
	return System::Void();
}

System::Void Kurs2021::RegZdForm::RegZdForm_Activated(System::Object^ sender, System::EventArgs^ e) 
{
	while (dataGridView1->Rows->Count != 0) dataGridView1->Rows->Remove(dataGridView1->Rows[dataGridView1->Rows->Count - 1]);
	for (int x = 0; x < tableRegZd.GetRowsNum(); x++)
	{
		dataGridView1->Rows->Add();
		dataGridView1->Rows[x]->Cells[0]->Value = (x + 1).ToString();
		dataGridView1->Rows[x]->Cells[1]->Value = gcnew String(tableRegZd.GetTableRow(x).GetTaskNumber().c_str());
		dataGridView1->Rows[x]->Cells[2]->Value = gcnew String(tableRegZd.GetTableRow(x).GetDate().c_str());
		dataGridView1->Rows[x]->Cells[3]->Value = gcnew String(tableRegZd.GetTableRow(x).GetCustomer().c_str());
		dataGridView1->Rows[x]->Cells[4]->Value = gcnew String(tableRegZd.GetTableRow(x).GetTask().c_str());
		dataGridView1->Rows[x]->Cells[5]->Value = gcnew String(tableRegZd.GetTableRow(x).GetProjNumber().c_str());
		dataGridView1->Rows[x]->Cells[6]->Value = gcnew String(tableRegZd.GetTableRow(x).GetSurname().c_str());
		dataGridView1->Rows[x]->Cells[7]->Value = gcnew String(tableRegZd.GetTableRow(x).GetStatus().c_str());
		dataGridView1->Rows[x]->Cells[8]->Value = gcnew String(tableRegZd.GetTableRow(x).GetNote().c_str());

	}

}
