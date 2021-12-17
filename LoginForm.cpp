#include "LoginForm.h"
#include "PKDForm.h"
#include "RegZadForm.h"
#include "Exp1.h"
#include "Exp2.h"
#include "Exp3.h"
#include "AddZadForm.h"
#include "AddProjForm.h"
#include "CorrectProjForm.h"
#include "CorrectZadForm.h"
#include "RequestZadForm.h"
#include "RequestProjForm.h"
#include "HelpForm.h"
//#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Kurs2021::LoginForm form;
	Application::Run(% form);
}
/*using namespace Kurs2021;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew LoginForm);
	return 0;
}*/

System::Void Kurs2021::LoginForm::buttonOk_Click(System::Object^ sender, System::EventArgs^ e)
{
	PKDForm^ form = gcnew PKDForm();
	form->Show();
	LoginForm::Hide();
}
