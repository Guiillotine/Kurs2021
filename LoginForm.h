#pragma once

namespace Kurs2021 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ TBLogin;
	private: System::Windows::Forms::TextBox^ TBPassword;
	protected:


	protected:


	protected:

	protected:

	private: System::Windows::Forms::Label^ labelLog;
	private: System::Windows::Forms::Label^ labelPassw;
	private: System::Windows::Forms::Button^ buttonOk;


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->TBLogin = (gcnew System::Windows::Forms::TextBox());
			this->TBPassword = (gcnew System::Windows::Forms::TextBox());
			this->labelLog = (gcnew System::Windows::Forms::Label());
			this->labelPassw = (gcnew System::Windows::Forms::Label());
			this->buttonOk = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// TBLogin
			// 
			this->TBLogin->Location = System::Drawing::Point(43, 47);
			this->TBLogin->Name = L"TBLogin";
			this->TBLogin->Size = System::Drawing::Size(134, 20);
			this->TBLogin->TabIndex = 0;
			this->TBLogin->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginForm::TBPassword_KeyDown);
			// 
			// TBPassword
			// 
			this->TBPassword->Location = System::Drawing::Point(43, 103);
			this->TBPassword->Name = L"TBPassword";
			this->TBPassword->PasswordChar = '*';
			this->TBPassword->Size = System::Drawing::Size(134, 20);
			this->TBPassword->TabIndex = 1;
			this->TBPassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginForm::TBPassword_KeyDown);
			// 
			// labelLog
			// 
			this->labelLog->AutoSize = true;
			this->labelLog->Location = System::Drawing::Point(66, 31);
			this->labelLog->Name = L"labelLog";
			this->labelLog->Size = System::Drawing::Size(84, 13);
			this->labelLog->TabIndex = 2;
			this->labelLog->Text = L"¬ведите логин:";
			// 
			// labelPassw
			// 
			this->labelPassw->AutoSize = true;
			this->labelPassw->Location = System::Drawing::Point(68, 87);
			this->labelPassw->Name = L"labelPassw";
			this->labelPassw->Size = System::Drawing::Size(91, 13);
			this->labelPassw->TabIndex = 3;
			this->labelPassw->Text = L"¬ведите пароль:";
			// 
			// buttonOk
			// 
			this->buttonOk->Location = System::Drawing::Point(75, 143);
			this->buttonOk->Name = L"buttonOk";
			this->buttonOk->Size = System::Drawing::Size(75, 23);
			this->buttonOk->TabIndex = 4;
			this->buttonOk->Text = L"ќк";
			this->buttonOk->UseVisualStyleBackColor = true;
			this->buttonOk->Click += gcnew System::EventHandler(this, &LoginForm::buttonOk_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(217, 178);
			this->Controls->Add(this->buttonOk);
			this->Controls->Add(this->labelPassw);
			this->Controls->Add(this->labelLog);
			this->Controls->Add(this->TBPassword);
			this->Controls->Add(this->TBLogin);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"јвторизаци€";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonOk_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void TBPassword_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e);
};
}
