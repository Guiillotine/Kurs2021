#include "LoginForm.h"
#include "PKDForm.h"
#include "RegZdForm.h"
#include "Exp1.h"
#include "Exp2.h"
#include "Exp3.h"
#include "AddZdForm.h"
#include "AddProjForm.h"
#include "CorrectProjForm.h"
#include "CorrectZdForm.h"
#include "RequestZdForm.h"
#include "RequestProjForm.h"
#include "HelpForm.h"
#include "RegZdClass.h"
#include "PKDClass.h"

using namespace System;
using namespace System::Windows::Forms;

TableRegZd tableRegZd;
TablePKD tablePKD;
string fnamePKD = "PKD";
string fnameRegZd = "RegZ";

[STAThreadAttribute]
void main(cli::array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Kurs2021::LoginForm form;
	Application::Run(% form);
}

System::Void Kurs2021::LoginForm::buttonOk_Click(System::Object^ sender, System::EventArgs^ e)
{
	PKDForm^ form = gcnew PKDForm();
	form->Show();
	LoginForm::Hide();
}
