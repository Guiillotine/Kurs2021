#pragma once

namespace Kurs2021 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� CorrectProjForm
	/// </summary>
	public ref class CorrectProjForm : public System::Windows::Forms::Form
	{
	public:
		CorrectProjForm(void)
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
		~CorrectProjForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label7;
	protected:
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView_in;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_numb;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_fio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_napr;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_kurs;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_chas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_att;
	private: System::Windows::Forms::Button^ button_in_ok;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button_in_back;

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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView_in = (gcnew System::Windows::Forms::DataGridView());
			this->Column_numb = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_fio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_napr = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_kurs = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_chas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_att = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button_in_ok = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_in_back = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_in))->BeginInit();
			this->SuspendLayout();
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(468, 109);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(173, 15);
			this->label7->TabIndex = 86;
			this->label7->Text = L"����������������� ������:";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(803, 58);
			this->textBox7->MaxLength = 16;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(116, 20);
			this->textBox7->TabIndex = 85;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(329, 57);
			this->textBox6->MaxLength = 16;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(118, 20);
			this->textBox6->TabIndex = 84;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(32, 57);
			this->textBox5->MaxLength = 16;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(109, 20);
			this->textBox5->TabIndex = 83;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(190, 57);
			this->textBox2->MaxLength = 14;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(83, 20);
			this->textBox2->TabIndex = 82;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(485, 57);
			this->textBox4->MaxLength = 16;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(133, 20);
			this->textBox4->TabIndex = 81;
			// 
			// label9
			// 
			this->label9->Location = System::Drawing::Point(957, 35);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(93, 19);
			this->label9->TabIndex = 80;
			this->label9->Text = L"����� �������";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(960, 58);
			this->textBox3->MaxLength = 16;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(80, 20);
			this->textBox3->TabIndex = 79;
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(809, 35);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(99, 18);
			this->label8->TabIndex = 78;
			this->label8->Text = L"���� ����������";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(651, 57);
			this->textBox1->MaxLength = 16;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(117, 20);
			this->textBox1->TabIndex = 77;
			// 
			// dataGridView_in
			// 
			this->dataGridView_in->AllowUserToAddRows = false;
			this->dataGridView_in->AllowUserToDeleteRows = false;
			this->dataGridView_in->AllowUserToResizeColumns = false;
			this->dataGridView_in->AllowUserToResizeRows = false;
			this->dataGridView_in->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView_in->BackgroundColor = System::Drawing::Color::LightGray;
			this->dataGridView_in->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_in->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column_numb,
					this->Column_name, this->Column_fio, this->Column_napr, this->Column_kurs, this->Column_chas, this->Column_att
			});
			this->dataGridView_in->Location = System::Drawing::Point(20, 136);
			this->dataGridView_in->Name = L"dataGridView_in";
			this->dataGridView_in->ReadOnly = true;
			this->dataGridView_in->RowHeadersVisible = false;
			this->dataGridView_in->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView_in->Size = System::Drawing::Size(1064, 64);
			this->dataGridView_in->TabIndex = 76;
			// 
			// Column_numb
			// 
			this->Column_numb->HeaderText = L"����� �������";
			this->Column_numb->Name = L"Column_numb";
			this->Column_numb->ReadOnly = true;
			// 
			// Column_name
			// 
			this->Column_name->HeaderText = L"���� �����������";
			this->Column_name->Name = L"Column_name";
			this->Column_name->ReadOnly = true;
			// 
			// Column_fio
			// 
			this->Column_fio->HeaderText = L"���� �������";
			this->Column_fio->Name = L"Column_fio";
			this->Column_fio->ReadOnly = true;
			// 
			// Column_napr
			// 
			this->Column_napr->HeaderText = L"������������ �������";
			this->Column_napr->Name = L"Column_napr";
			this->Column_napr->ReadOnly = true;
			// 
			// Column_kurs
			// 
			this->Column_kurs->HeaderText = L"�����������";
			this->Column_kurs->Name = L"Column_kurs";
			this->Column_kurs->ReadOnly = true;
			// 
			// Column_chas
			// 
			this->Column_chas->HeaderText = L"���� ���������� �������";
			this->Column_chas->Name = L"Column_chas";
			this->Column_chas->ReadOnly = true;
			// 
			// Column_att
			// 
			this->Column_att->HeaderText = L"����� �������";
			this->Column_att->Name = L"Column_att";
			this->Column_att->ReadOnly = true;
			// 
			// button_in_ok
			// 
			this->button_in_ok->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_in_ok->Location = System::Drawing::Point(1009, 220);
			this->button_in_ok->Name = L"button_in_ok";
			this->button_in_ok->Size = System::Drawing::Size(75, 23);
			this->button_in_ok->TabIndex = 75;
			this->button_in_ok->Text = L"��";
			this->button_in_ok->UseVisualStyleBackColor = true;
			this->button_in_ok->Click += gcnew System::EventHandler(this, &CorrectProjForm::button_in_ok_Click);
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(669, 35);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 15);
			this->label6->TabIndex = 74;
			this->label6->Text = L" �����������";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(482, 35);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(133, 13);
			this->label4->TabIndex = 73;
			this->label4->Text = L"  ������������ �������";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(349, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 28);
			this->label3->TabIndex = 72;
			this->label3->Text = L"���� �������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(173, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 13);
			this->label2->TabIndex = 71;
			this->label2->Text = L"   ���� �����������";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(43, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 13);
			this->label1->TabIndex = 70;
			this->label1->Text = L"����� �������";
			// 
			// button_in_back
			// 
			this->button_in_back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_in_back->Location = System::Drawing::Point(20, 220);
			this->button_in_back->Name = L"button_in_back";
			this->button_in_back->Size = System::Drawing::Size(75, 23);
			this->button_in_back->TabIndex = 69;
			this->button_in_back->Text = L"�����";
			this->button_in_back->UseVisualStyleBackColor = true;
			this->button_in_back->Click += gcnew System::EventHandler(this, &CorrectProjForm::button_in_back_Click);
			// 
			// CorrectProjForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1104, 267);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView_in);
			this->Controls->Add(this->button_in_ok);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_in_back);
			this->MaximizeBox = false;
			this->Name = L"CorrectProjForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�������������� ��������";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_in))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_in_back_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_in_ok_Click(System::Object^ sender, System::EventArgs^ e);
};
}
