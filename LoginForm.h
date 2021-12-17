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
	private: System::Windows::Forms::TextBox^ textBoxLog;
	protected:
	private: System::Windows::Forms::TextBox^ textBoxPassw;
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
			this->textBoxLog = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassw = (gcnew System::Windows::Forms::TextBox());
			this->labelLog = (gcnew System::Windows::Forms::Label());
			this->labelPassw = (gcnew System::Windows::Forms::Label());
			this->buttonOk = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBoxLog
			// 
			this->textBoxLog->Location = System::Drawing::Point(43, 47);
			this->textBoxLog->Name = L"textBoxLog";
			this->textBoxLog->Size = System::Drawing::Size(134, 20);
			this->textBoxLog->TabIndex = 0;
			// 
			// textBoxPassw
			// 
			this->textBoxPassw->Location = System::Drawing::Point(43, 103);
			this->textBoxPassw->Name = L"textBoxPassw";
			this->textBoxPassw->Size = System::Drawing::Size(134, 20);
			this->textBoxPassw->TabIndex = 1;
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
			this->ClientSize = System::Drawing::Size(217, 178);
			this->Controls->Add(this->buttonOk);
			this->Controls->Add(this->labelPassw);
			this->Controls->Add(this->labelLog);
			this->Controls->Add(this->textBoxPassw);
			this->Controls->Add(this->textBoxLog);
			this->MaximizeBox = false;
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"јвторизаци€";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonOk_Click(System::Object^ sender, System::EventArgs^ e);
};
}
