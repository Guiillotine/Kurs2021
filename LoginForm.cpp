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
string fnameList = "SurnamesList";
string login;
int fmode = 0; //Режим

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
	fstream file;
	string password, fnameLogin = "LoginList";
	int f = 0;
	file.open(fnameLogin, fstream::in);
	if (!file.is_open()) MessageBox::Show("Не удалось открыть файл с логинами и паролями. Авторизация невозможна", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	else
	{
		int k = 0;
		while (!file.eof())
		{
			file >> login;
			if (this->TBLogin->Text == gcnew String(login.c_str()))
			{ 
				file >> password;
				if (this->TBPassword->Text == gcnew String(password.c_str()))
				{
					f = 1;
					if (k == 0) fmode = 1;
					PKDForm^ form = gcnew PKDForm();
					form->Show();
					LoginForm::Hide();
					break;
				}
			}
			k++;
		}
		if (!f) MessageBox::Show("Неверно указан логин или пароль", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	/*PKDForm^ form = gcnew PKDForm();
	form->Show();
	LoginForm::Hide();*/
}
