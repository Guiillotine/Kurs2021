#pragma once

namespace Kurs2021 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Exp1
	/// </summary>
	public ref class Exp1 : public System::Windows::Forms::Form
	{
	public:
		Exp1(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Exp1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	protected:
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonOk;
	private: System::Windows::Forms::Button^ buttonBack;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonOk = (gcnew System::Windows::Forms::Button());
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(193, 64);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 43;
			this->label4->Text = L"_";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(212, 64);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(22, 20);
			this->textBox3->TabIndex = 42;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(165, 64);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(22, 20);
			this->textBox2->TabIndex = 41;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 13);
			this->label3->TabIndex = 40;
			this->label3->Text = L"�������������� ������:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 106);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(138, 13);
			this->label5->TabIndex = 39;
			this->label5->Text = L"������� �������� �����:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(156, 103);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(88, 20);
			this->textBox4->TabIndex = 38;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(199, 13);
			this->label1->TabIndex = 37;
			this->label1->Text = L"������� ������� ����� ������� ���";
			// 
			// buttonOk
			// 
			this->buttonOk->Location = System::Drawing::Point(235, 136);
			this->buttonOk->Name = L"buttonOk";
			this->buttonOk->Size = System::Drawing::Size(60, 23);
			this->buttonOk->TabIndex = 44;
			this->buttonOk->Text = L"��";
			this->buttonOk->UseVisualStyleBackColor = true;
			// 
			// buttonBack
			// 
			this->buttonBack->Location = System::Drawing::Point(12, 136);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(60, 23);
			this->buttonBack->TabIndex = 45;
			this->buttonBack->Text = L"������";
			this->buttonBack->UseVisualStyleBackColor = true;
			this->buttonBack->Click += gcnew System::EventHandler(this, &Exp1::buttonBack_Click);
			// 
			// Exp1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(307, 171);
			this->Controls->Add(this->buttonBack);
			this->Controls->Add(this->buttonOk);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->Name = L"Exp1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"������� �������";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonBack_Click(System::Object^ sender, System::EventArgs^ e);
};
}
