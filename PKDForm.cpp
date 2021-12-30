#include "PKDForm.h"
#include "LoginForm.h"
#include "RegZdForm.h"
#include "Exp1.h"
#include "Exp2.h"
#include "Exp3.h"
#include "AddProjForm.h"
#include "CorrectProjForm.h"
#include "RequestProjForm.h"
#include "HelpForm.h"
#include "PKDClass.h"
extern TablePKD tablePKD;
extern int fmode;
extern string login;

System::Void Kurs2021::PKDForm::PKDForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	if (!fmode) this->Text = L"Ó÷åò ÏÊÄ (Ïîëüçîâàòåëü: " + gcnew String(login.c_str()) + ")";
	else this->Text = L"Ó÷åò ÏÊÄ (Ðåæèì ðàñøèðåííîãî äîñòóïà)";
	if (!fmode)
	{
		this->toolStripButtonCorrect->Visible = false;
		this->èçìåíèòüÑòðîêóToolStripMenuItem->Visible = false;
	}
	if (tablePKD.GetRowsNum() == 0) if (tablePKD.Getfile(fnamePKD) == 0) MessageBox::Show("Íå óäàëîñü îòêðûòü ôàéë", "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
	return System::Void();
}

System::Void Kurs2021::PKDForm::openRegZdToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	RegZdForm^ form = gcnew RegZdForm();
	form->Show();
	PKDForm::Hide();
	return System::Void();
}

System::Void Kurs2021::PKDForm::æóðíàëÓ÷åòàÍîìåðîâÏÊÄToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	tablePKD.Putfile("file");
	Exp1^ form = gcnew Exp1();
	form->ShowDialog();
	return System::Void();
}

System::Void Kurs2021::PKDForm::æóðíàëÓ÷åòàÂûïîëíåííîéÏÊÄToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Exp2^ form = gcnew Exp2();
	form->ShowDialog();
	return System::Void();
}

System::Void Kurs2021::PKDForm::æóðíàëÐåãèñòðàöèèÇàäàíèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Exp3^ form = gcnew Exp3();
	form->ShowDialog();
	return System::Void();
}

System::Void Kurs2021::PKDForm::äîáàâèòüÑòðîêóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	AddProjForm^ form = gcnew AddProjForm();
	form->ShowDialog();
	return System::Void();
}

System::Void Kurs2021::PKDForm::èçìåíèòüÑòðîêóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	CorrectProjForm^ form = gcnew CorrectProjForm();
	form->ShowDialog();
	return System::Void();
}

System::Void Kurs2021::PKDForm::íàéòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	RequestProjForm^ form = gcnew RequestProjForm();
	form->ShowDialog();
	return System::Void();
}

System::Void Kurs2021::PKDForm::ñïðàâêàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	HelpForm^ form = gcnew HelpForm();
	form->ShowDialog();
	return System::Void();
}

System::Void Kurs2021::PKDForm::PKDForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
	Application::Exit();
	return System::Void();
}

System::Void Kurs2021::PKDForm::PKDForm_Activated(System::Object^ sender, System::EventArgs^ e)
{
	while (dataGridView1->Rows->Count != 0) 
		dataGridView1->Rows->Remove(dataGridView1->Rows[dataGridView1->Rows->Count - 1]);
	for (int x = 0; x < tablePKD.GetRowsNum(); x++)
	{
		dataGridView1->Rows->Add();	
		dataGridView1->Rows[x]->Cells[0]->Value = (x + 1).ToString();
		dataGridView1->Rows[x]->Cells[1]->Value = gcnew String(tablePKD.GetTableRow(x).GetTaskNumber().c_str());
		dataGridView1->Rows[x]->Cells[2]->Value = gcnew String(tablePKD.GetTableRow(x).GetDateReg().c_str());
		dataGridView1->Rows[x]->Cells[3]->Value = gcnew String(tablePKD.GetTableRow(x).GetCipher().c_str());
		dataGridView1->Rows[x]->Cells[4]->Value = gcnew String(tablePKD.GetTableRow(x).GetProjName().c_str());
		dataGridView1->Rows[x]->Cells[5]->Value = gcnew String(tablePKD.GetTableRow(x).GetSurname().c_str());
		if ((tablePKD.GetTableRow(x).GetDateEnd() == "00.00.0000") || tablePKD.GetTableRow(x).GetDateEnd() == "  .  .") 
			dataGridView1->Rows[x]->Cells[6]->Value = "     -------";
		else dataGridView1->Rows[x]->Cells[6]->Value = gcnew String(tablePKD.GetTableRow(x).GetDateEnd().c_str());
		dataGridView1->Rows[x]->Cells[7]->Value = tablePKD.GetTableRow(x).GetVolume().ToString();
	}


}
