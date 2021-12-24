#pragma once

namespace Kurs2021 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� AddProjForm
	/// </summary>
	public ref class AddProjForm : public System::Windows::Forms::Form
	{
	public:
		AddProjForm(void)
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
		~AddProjForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ dateEnd;
	protected:

	private: System::Windows::Forms::TextBox^ cipher;
	protected:

	private: System::Windows::Forms::TextBox^ taskNumber;
	private: System::Windows::Forms::TextBox^ dateReg;
	private: System::Windows::Forms::TextBox^ projName;



	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ volume;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ surname;

	private: System::Windows::Forms::DataGridView^ dataGridView_in;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_numb;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_fio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_napr;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_kurs;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_chas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_att;
	private: System::Windows::Forms::Button^ buttonOk;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonBack;
	private: System::Windows::Forms::Label^ label7;


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
			this->dateEnd = (gcnew System::Windows::Forms::TextBox());
			this->cipher = (gcnew System::Windows::Forms::TextBox());
			this->taskNumber = (gcnew System::Windows::Forms::TextBox());
			this->dateReg = (gcnew System::Windows::Forms::TextBox());
			this->projName = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->volume = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->surname = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView_in = (gcnew System::Windows::Forms::DataGridView());
			this->Column_numb = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_fio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_napr = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_kurs = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_chas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_att = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->buttonOk = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_in))->BeginInit();
			this->SuspendLayout();
			// 
			// dateEnd
			// 
			this->dateEnd->Location = System::Drawing::Point(810, 67);
			this->dateEnd->MaxLength = 16;
			this->dateEnd->Name = L"dateEnd";
			this->dateEnd->Size = System::Drawing::Size(116, 20);
			this->dateEnd->TabIndex = 67;
			// 
			// cipher
			// 
			this->cipher->Location = System::Drawing::Point(336, 66);
			this->cipher->MaxLength = 16;
			this->cipher->Name = L"cipher";
			this->cipher->Size = System::Drawing::Size(118, 20);
			this->cipher->TabIndex = 66;
			// 
			// taskNumber
			// 
			this->taskNumber->Location = System::Drawing::Point(39, 66);
			this->taskNumber->MaxLength = 16;
			this->taskNumber->Name = L"taskNumber";
			this->taskNumber->Size = System::Drawing::Size(109, 20);
			this->taskNumber->TabIndex = 65;
			// 
			// dateReg
			// 
			this->dateReg->Location = System::Drawing::Point(197, 66);
			this->dateReg->MaxLength = 14;
			this->dateReg->Name = L"dateReg";
			this->dateReg->Size = System::Drawing::Size(83, 20);
			this->dateReg->TabIndex = 64;
			// 
			// projName
			// 
			this->projName->Location = System::Drawing::Point(492, 66);
			this->projName->MaxLength = 16;
			this->projName->Name = L"projName";
			this->projName->Size = System::Drawing::Size(133, 20);
			this->projName->TabIndex = 63;
			// 
			// label9
			// 
			this->label9->Location = System::Drawing::Point(964, 44);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(93, 19);
			this->label9->TabIndex = 62;
			this->label9->Text = L"����� �������";
			// 
			// volume
			// 
			this->volume->Location = System::Drawing::Point(967, 67);
			this->volume->MaxLength = 16;
			this->volume->Name = L"volume";
			this->volume->Size = System::Drawing::Size(80, 20);
			this->volume->TabIndex = 61;
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(816, 44);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(99, 18);
			this->label8->TabIndex = 60;
			this->label8->Text = L"���� ����������";
			// 
			// surname
			// 
			this->surname->Location = System::Drawing::Point(658, 66);
			this->surname->MaxLength = 16;
			this->surname->Name = L"surname";
			this->surname->Size = System::Drawing::Size(117, 20);
			this->surname->TabIndex = 59;
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
			this->dataGridView_in->Location = System::Drawing::Point(27, 136);
			this->dataGridView_in->Name = L"dataGridView_in";
			this->dataGridView_in->ReadOnly = true;
			this->dataGridView_in->RowHeadersVisible = false;
			this->dataGridView_in->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView_in->Size = System::Drawing::Size(1064, 105);
			this->dataGridView_in->TabIndex = 58;
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
			// buttonOk
			// 
			this->buttonOk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonOk->Location = System::Drawing::Point(1016, 256);
			this->buttonOk->Name = L"buttonOk";
			this->buttonOk->Size = System::Drawing::Size(75, 23);
			this->buttonOk->TabIndex = 57;
			this->buttonOk->Text = L"��";
			this->buttonOk->UseVisualStyleBackColor = true;
			this->buttonOk->Click += gcnew System::EventHandler(this, &AddProjForm::buttonOk_Click);
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(676, 44);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 15);
			this->label6->TabIndex = 56;
			this->label6->Text = L" �����������";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(489, 44);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(133, 13);
			this->label4->TabIndex = 55;
			this->label4->Text = L"  ������������ �������";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(356, 44);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 28);
			this->label3->TabIndex = 54;
			this->label3->Text = L"���� �������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(180, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 13);
			this->label2->TabIndex = 53;
			this->label2->Text = L"   ���� �����������";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(50, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 13);
			this->label1->TabIndex = 52;
			this->label1->Text = L"����� �������";
			// 
			// buttonBack
			// 
			this->buttonBack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonBack->Location = System::Drawing::Point(27, 256);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(75, 23);
			this->buttonBack->TabIndex = 51;
			this->buttonBack->Text = L"�����";
			this->buttonBack->UseVisualStyleBackColor = true;
			this->buttonBack->Click += gcnew System::EventHandler(this, &AddProjForm::buttonBack_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(489, 118);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(144, 15);
			this->label7->TabIndex = 68;
			this->label7->Text = L"����������� �������:";
			// 
			// AddProjForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1118, 299);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dateEnd);
			this->Controls->Add(this->cipher);
			this->Controls->Add(this->taskNumber);
			this->Controls->Add(this->dateReg);
			this->Controls->Add(this->projName);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->volume);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->surname);
			this->Controls->Add(this->dataGridView_in);
			this->Controls->Add(this->buttonOk);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonBack);
			this->MaximizeBox = false;
			this->Name = L"AddProjForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"���������� �������";
			this->Load += gcnew System::EventHandler(this, &AddProjForm::AddProjForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_in))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonBack_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonOk_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void AddProjForm_Load(System::Object^ sender, System::EventArgs^ e);
};
}
