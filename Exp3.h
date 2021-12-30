#pragma once

namespace Kurs2021 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Exp3
	/// </summary>
	public ref class Exp3 : public System::Windows::Forms::Form
	{
	public:
		Exp3(void)
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
		~Exp3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;

	protected:



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ fileName;

	private: System::Windows::Forms::Button^ buttonBack;
	private: System::Windows::Forms::Button^ buttonOk;
	private: System::Windows::Forms::MaskedTextBox^ from;
	private: System::Windows::Forms::MaskedTextBox^ to;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Exp3::typeid));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->fileName = (gcnew System::Windows::Forms::TextBox());
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->buttonOk = (gcnew System::Windows::Forms::Button());
			this->from = (gcnew System::Windows::Forms::MaskedTextBox());
			this->to = (gcnew System::Windows::Forms::MaskedTextBox());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(193, 69);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 33;
			this->label4->Text = L"_";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 72);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 13);
			this->label3->TabIndex = 30;
			this->label3->Text = L"Ёкспортировать строки:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(138, 13);
			this->label2->TabIndex = 29;
			this->label2->Text = L"¬ведите название файла:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(207, 13);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Ёкспорт журнала регистрации заданий";
			// 
			// fileName
			// 
			this->fileName->Location = System::Drawing::Point(156, 103);
			this->fileName->MaxLength = 20;
			this->fileName->Name = L"fileName";
			this->fileName->Size = System::Drawing::Size(88, 20);
			this->fileName->TabIndex = 27;
			this->fileName->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Exp3::fileName_KeyDown);
			// 
			// buttonBack
			// 
			this->buttonBack->Location = System::Drawing::Point(12, 135);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(60, 23);
			this->buttonBack->TabIndex = 47;
			this->buttonBack->Text = L"Ќазад";
			this->buttonBack->UseVisualStyleBackColor = true;
			this->buttonBack->Click += gcnew System::EventHandler(this, &Exp3::buttonBack_Click);
			// 
			// buttonOk
			// 
			this->buttonOk->Location = System::Drawing::Point(235, 135);
			this->buttonOk->Name = L"buttonOk";
			this->buttonOk->Size = System::Drawing::Size(60, 23);
			this->buttonOk->TabIndex = 46;
			this->buttonOk->Text = L"ќк";
			this->buttonOk->UseVisualStyleBackColor = true;
			this->buttonOk->Click += gcnew System::EventHandler(this, &Exp3::buttonOk_Click);
			// 
			// from
			// 
			this->from->Location = System::Drawing::Point(156, 69);
			this->from->Mask = L"0000";
			this->from->Name = L"from";
			this->from->Size = System::Drawing::Size(31, 20);
			this->from->TabIndex = 73;
			this->from->ValidatingType = System::DateTime::typeid;
			this->from->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Exp3::fileName_KeyDown);
			// 
			// to
			// 
			this->to->Location = System::Drawing::Point(212, 69);
			this->to->Mask = L"0000";
			this->to->Name = L"to";
			this->to->Size = System::Drawing::Size(31, 20);
			this->to->TabIndex = 74;
			this->to->ValidatingType = System::DateTime::typeid;
			this->to->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Exp3::fileName_KeyDown);
			// 
			// Exp3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(307, 170);
			this->Controls->Add(this->to);
			this->Controls->Add(this->from);
			this->Controls->Add(this->buttonBack);
			this->Controls->Add(this->buttonOk);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->fileName);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Exp3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ёкспорт журнала";
			this->Load += gcnew System::EventHandler(this, &Exp3::Exp3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonBack_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonOk_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Exp3_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void fileName_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
};
}
