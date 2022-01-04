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
#include "TableClass.h"

using namespace System;
using namespace System::Windows::Forms;

TableRegZd tableRegZd;
TablePKD tablePKD;
string fnamePKD = "PKD";
string fnameRegZd = "RegZ";
string password, fnameLogin = "LoginList";
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
	string password;
	int f = 0;
	file.open(fnameLogin, fstream::in);
	if (!file.is_open()) MessageBox::Show("Не удалось открыть файл с логинами и паролями. Авторизация невозможна", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	else
	{
		int k = 0;
		while (!file.eof())
		{
			getline(file, login); //file >> login;
			if (this->TBLogin->Text == gcnew String(login.c_str()))
			{ 
				getline(file, password); //file >> password;
				if (this->TBPassword->Text == gcnew String(password.c_str()))
				{
					f = 1;
					if (k == 0) fmode = 1;
					PKDForm^ form1 = gcnew PKDForm(); RegZdForm^ form2 = gcnew RegZdForm();
					if (tablePKD.Getfile(fnamePKD) == 0) MessageBox::Show("Не удалось открыть файл с таблицей \"Учет ПКД\"", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					else
					{
						if (tableRegZd.Getfile(fnameRegZd) == 0) MessageBox::Show("Не удалось открыть файл с таблицей \"Регистрация заданий на проектирование\"", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
						else
						{ 
							if (!fmode) form1->Show(); else form2->Show();
							LoginForm::Hide();
							break;
						}
					}
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

System::Void Kurs2021::LoginForm::TBPassword_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyCode == Keys::Enter)
	{
		e->SuppressKeyPress = true;
		buttonOk_Click(sender, e);
	}
}
System::Void Kurs2021::LoginForm::LoginForm_Load(System::Object^ sender, System::EventArgs^ e)
{
}