#include "RegZadForm.h"
#include "PKDForm.h"
#include "Exp1.h"
#include "Exp2.h"
#include "Exp3.h"
#include "AddZadForm.h"
#include "CorrectZadForm.h"
#include "RequestZadForm.h"
#include "HelpForm.h"

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
