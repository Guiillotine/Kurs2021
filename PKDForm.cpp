#include "PKDForm.h"
#include "LoginForm.h"
#include "RegZadForm.h"
#include "Exp1.h"
#include "Exp2.h"
#include "Exp3.h"
#include "AddProjForm.h"
#include "CorrectProjForm.h"
#include "RequestProjForm.h"
#include "HelpForm.h"

System::Void Kurs2021::PKDForm::PKDForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Kurs2021::PKDForm::ñîçäàòüÔàéëToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	RegZadForm^ form = gcnew RegZadForm();
	form->Show();
	PKDForm::Hide();
	return System::Void();
}

System::Void Kurs2021::PKDForm::æóðíàëÓ÷åòàÍîìåðîâÏÊÄToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
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

System::Void Kurs2021::PKDForm::PKDForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	/*LoginForm^ form1 = gcnew LoginForm();
	form1->Close();
	RegZadForm^ form2 = gcnew RegZadForm();
	form2->Close();
	return System::Void();*/
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
