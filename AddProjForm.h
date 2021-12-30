#pragma once

namespace Kurs2021 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AddProjForm
	/// </summary>
	public ref class AddProjForm : public System::Windows::Forms::Form
	{
	public:
		AddProjForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AddProjForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	protected:


	protected:




	private: System::Windows::Forms::TextBox^ projName;



	private: System::Windows::Forms::Label^ label9;



	private: System::Windows::Forms::Label^ label8;



	private: System::Windows::Forms::DataGridView^ dataGridView_in;







	private: System::Windows::Forms::Button^ buttonOk;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonBack;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::MaskedTextBox^ cipher;
	private: System::Windows::Forms::MaskedTextBox^ dateReg;
	private: System::Windows::Forms::MaskedTextBox^ taskNumber;
	private: System::Windows::Forms::MaskedTextBox^ volume;
	private: System::Windows::Forms::MaskedTextBox^ dateEnd;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_numb;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_fio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_napr;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_kurs;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_chas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_att;
	private: System::Windows::Forms::ComboBox^ surname;









	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddProjForm::typeid));
			this->projName = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
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
			this->cipher = (gcnew System::Windows::Forms::MaskedTextBox());
			this->dateReg = (gcnew System::Windows::Forms::MaskedTextBox());
			this->taskNumber = (gcnew System::Windows::Forms::MaskedTextBox());
			this->volume = (gcnew System::Windows::Forms::MaskedTextBox());
			this->dateEnd = (gcnew System::Windows::Forms::MaskedTextBox());
			this->surname = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_in))->BeginInit();
			this->SuspendLayout();
			// 
			// projName
			// 
			this->projName->Location = System::Drawing::Point(492, 66);
			this->projName->MaxLength = 50;
			this->projName->Name = L"projName";
			this->projName->Size = System::Drawing::Size(133, 20);
			this->projName->TabIndex = 63;
			this->projName->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AddProjForm::taskNumber_KeyDown);
			// 
			// label9
			// 
			this->label9->Location = System::Drawing::Point(964, 44);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(93, 19);
			this->label9->TabIndex = 62;
			this->label9->Text = L"Объём проекта";
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(827, 44);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(99, 18);
			this->label8->TabIndex = 60;
			this->label8->Text = L"Дата завершения";
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
			this->Column_numb->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column_numb->HeaderText = L"Номер задания";
			this->Column_numb->Name = L"Column_numb";
			this->Column_numb->ReadOnly = true;
			this->Column_numb->Width = 90;
			// 
			// Column_name
			// 
			this->Column_name->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column_name->FillWeight = 459.8131F;
			this->Column_name->HeaderText = L"Дата регистрации";
			this->Column_name->Name = L"Column_name";
			this->Column_name->ReadOnly = true;
			// 
			// Column_fio
			// 
			this->Column_fio->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column_fio->FillWeight = 28.03738F;
			this->Column_fio->HeaderText = L"Шифр проекта";
			this->Column_fio->Name = L"Column_fio";
			this->Column_fio->ReadOnly = true;
			this->Column_fio->Width = 105;
			// 
			// Column_napr
			// 
			this->Column_napr->FillWeight = 28.03738F;
			this->Column_napr->HeaderText = L"Наименование проекта";
			this->Column_napr->Name = L"Column_napr";
			this->Column_napr->ReadOnly = true;
			// 
			// Column_kurs
			// 
			this->Column_kurs->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column_kurs->FillWeight = 28.03738F;
			this->Column_kurs->HeaderText = L"Исполнитель";
			this->Column_kurs->Name = L"Column_kurs";
			this->Column_kurs->ReadOnly = true;
			this->Column_kurs->Width = 200;
			// 
			// Column_chas
			// 
			this->Column_chas->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column_chas->FillWeight = 28.03738F;
			this->Column_chas->HeaderText = L"Дата завершения проекта";
			this->Column_chas->Name = L"Column_chas";
			this->Column_chas->ReadOnly = true;
			this->Column_chas->Width = 140;
			// 
			// Column_att
			// 
			this->Column_att->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column_att->FillWeight = 28.03738F;
			this->Column_att->HeaderText = L"Объем проекта";
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
			this->buttonOk->Text = L"Ок";
			this->buttonOk->UseVisualStyleBackColor = true;
			this->buttonOk->Click += gcnew System::EventHandler(this, &AddProjForm::buttonOk_Click);
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(691, 44);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 15);
			this->label6->TabIndex = 56;
			this->label6->Text = L" Исполнитель";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(489, 44);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(133, 13);
			this->label4->TabIndex = 55;
			this->label4->Text = L"  Наименование проекта";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(356, 44);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 28);
			this->label3->TabIndex = 54;
			this->label3->Text = L"Шифр проекта";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(180, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 13);
			this->label2->TabIndex = 53;
			this->label2->Text = L"   Дата регистрации";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(50, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 13);
			this->label1->TabIndex = 52;
			this->label1->Text = L"Номер задания";
			// 
			// buttonBack
			// 
			this->buttonBack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonBack->Location = System::Drawing::Point(27, 256);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(75, 23);
			this->buttonBack->TabIndex = 51;
			this->buttonBack->Text = L"Назад";
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
			this->label7->Text = L"Добавленные проекты:";
			// 
			// cipher
			// 
			this->cipher->Location = System::Drawing::Point(369, 66);
			this->cipher->Mask = L"00-000";
			this->cipher->Name = L"cipher";
			this->cipher->Size = System::Drawing::Size(57, 20);
			this->cipher->TabIndex = 69;
			this->cipher->ValidatingType = System::Int32::typeid;
			this->cipher->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AddProjForm::taskNumber_KeyDown);
			// 
			// dateReg
			// 
			this->dateReg->Location = System::Drawing::Point(204, 66);
			this->dateReg->Mask = L"00/00/0000";
			this->dateReg->Name = L"dateReg";
			this->dateReg->Size = System::Drawing::Size(68, 20);
			this->dateReg->TabIndex = 70;
			this->dateReg->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AddProjForm::taskNumber_KeyDown);
			// 
			// taskNumber
			// 
			this->taskNumber->Location = System::Drawing::Point(71, 66);
			this->taskNumber->Mask = L"00/0";
			this->taskNumber->Name = L"taskNumber";
			this->taskNumber->Size = System::Drawing::Size(40, 20);
			this->taskNumber->TabIndex = 71;
			this->taskNumber->ValidatingType = System::DateTime::typeid;
			this->taskNumber->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AddProjForm::taskNumber_KeyDown);
			// 
			// volume
			// 
			this->volume->Location = System::Drawing::Point(985, 67);
			this->volume->Mask = L"00000";
			this->volume->Name = L"volume";
			this->volume->Size = System::Drawing::Size(42, 20);
			this->volume->TabIndex = 72;
			this->volume->ValidatingType = System::Int32::typeid;
			this->volume->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AddProjForm::taskNumber_KeyDown);
			// 
			// dateEnd
			// 
			this->dateEnd->Location = System::Drawing::Point(841, 67);
			this->dateEnd->Mask = L"00/00/0000";
			this->dateEnd->Name = L"dateEnd";
			this->dateEnd->Size = System::Drawing::Size(68, 20);
			this->dateEnd->TabIndex = 73;
			this->dateEnd->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AddProjForm::taskNumber_KeyDown);
			// 
			// surname
			// 
			this->surname->FormattingEnabled = true;
			this->surname->Location = System::Drawing::Point(671, 67);
			this->surname->Name = L"surname";
			this->surname->Size = System::Drawing::Size(117, 21);
			this->surname->TabIndex = 95;
			this->surname->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AddProjForm::taskNumber_KeyDown);
			this->surname->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddProjForm::surname_KeyPress);
			// 
			// AddProjForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1118, 299);
			this->Controls->Add(this->surname);
			this->Controls->Add(this->dateEnd);
			this->Controls->Add(this->volume);
			this->Controls->Add(this->taskNumber);
			this->Controls->Add(this->dateReg);
			this->Controls->Add(this->cipher);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->projName);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dataGridView_in);
			this->Controls->Add(this->buttonOk);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonBack);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"AddProjForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Добавление проекта";
			this->Load += gcnew System::EventHandler(this, &AddProjForm::AddProjForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_in))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonBack_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonOk_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void AddProjForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void surname_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
	private: System::Void taskNumber_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
};
}
