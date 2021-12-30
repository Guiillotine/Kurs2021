#pragma once

namespace Kurs2021 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для RequestProjForm
	/// </summary>
	public ref class RequestProjForm : public System::Windows::Forms::Form
	{
	public:
		RequestProjForm(void)
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
		~RequestProjForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridView^ dataGridView;


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
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::MaskedTextBox^ dateEnd;
	private: System::Windows::Forms::MaskedTextBox^ volume;
	private: System::Windows::Forms::MaskedTextBox^ taskNumber;
	private: System::Windows::Forms::MaskedTextBox^ dateReg;
	private: System::Windows::Forms::MaskedTextBox^ cipher;
	private: System::Windows::Forms::TextBox^ projName;


	private: System::Windows::Forms::ComboBox^ sign;
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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dateEnd = (gcnew System::Windows::Forms::MaskedTextBox());
			this->volume = (gcnew System::Windows::Forms::MaskedTextBox());
			this->taskNumber = (gcnew System::Windows::Forms::MaskedTextBox());
			this->dateReg = (gcnew System::Windows::Forms::MaskedTextBox());
			this->cipher = (gcnew System::Windows::Forms::MaskedTextBox());
			this->projName = (gcnew System::Windows::Forms::TextBox());
			this->sign = (gcnew System::Windows::Forms::ComboBox());
			this->surname = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// label9
			// 
			this->label9->Location = System::Drawing::Point(959, 39);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(93, 19);
			this->label9->TabIndex = 80;
			this->label9->Text = L"Объём проекта";
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(826, 40);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(99, 18);
			this->label8->TabIndex = 78;
			this->label8->Text = L"Дата завершения";
			// 
			// dataGridView
			// 
			this->dataGridView->AllowUserToAddRows = false;
			this->dataGridView->AllowUserToDeleteRows = false;
			this->dataGridView->AllowUserToResizeColumns = false;
			this->dataGridView->AllowUserToResizeRows = false;
			this->dataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView->BackgroundColor = System::Drawing::Color::LightGray;
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column_numb,
					this->Column_name, this->Column_fio, this->Column_napr, this->Column_kurs, this->Column_chas, this->Column_att
			});
			this->dataGridView->Location = System::Drawing::Point(29, 149);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->ReadOnly = true;
			this->dataGridView->RowHeadersVisible = false;
			this->dataGridView->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView->Size = System::Drawing::Size(1064, 228);
			this->dataGridView->TabIndex = 76;
			// 
			// Column_numb
			// 
			this->Column_numb->HeaderText = L"Номер задания";
			this->Column_numb->Name = L"Column_numb";
			this->Column_numb->ReadOnly = true;
			// 
			// Column_name
			// 
			this->Column_name->HeaderText = L"Дата регистрации";
			this->Column_name->Name = L"Column_name";
			this->Column_name->ReadOnly = true;
			// 
			// Column_fio
			// 
			this->Column_fio->HeaderText = L"Шифр проекта";
			this->Column_fio->Name = L"Column_fio";
			this->Column_fio->ReadOnly = true;
			// 
			// Column_napr
			// 
			this->Column_napr->HeaderText = L"Наименование проекта";
			this->Column_napr->Name = L"Column_napr";
			this->Column_napr->ReadOnly = true;
			// 
			// Column_kurs
			// 
			this->Column_kurs->HeaderText = L"Исполнитель";
			this->Column_kurs->Name = L"Column_kurs";
			this->Column_kurs->ReadOnly = true;
			// 
			// Column_chas
			// 
			this->Column_chas->HeaderText = L"Дата завершения проекта";
			this->Column_chas->Name = L"Column_chas";
			this->Column_chas->ReadOnly = true;
			// 
			// Column_att
			// 
			this->Column_att->HeaderText = L"Объем проекта";
			this->Column_att->Name = L"Column_att";
			this->Column_att->ReadOnly = true;
			// 
			// button_in_ok
			// 
			this->button_in_ok->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_in_ok->Location = System::Drawing::Point(1018, 395);
			this->button_in_ok->Name = L"button_in_ok";
			this->button_in_ok->Size = System::Drawing::Size(75, 23);
			this->button_in_ok->TabIndex = 75;
			this->button_in_ok->Text = L"Ок";
			this->button_in_ok->UseVisualStyleBackColor = true;
			this->button_in_ok->Click += gcnew System::EventHandler(this, &RequestProjForm::button_in_ok_Click);
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(688, 39);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 15);
			this->label6->TabIndex = 74;
			this->label6->Text = L" Исполнитель";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(491, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(133, 13);
			this->label4->TabIndex = 73;
			this->label4->Text = L"  Наименование проекта";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(352, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 28);
			this->label3->TabIndex = 72;
			this->label3->Text = L"Шифр проекта";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(182, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 13);
			this->label2->TabIndex = 71;
			this->label2->Text = L"   Дата регистрации";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(52, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 13);
			this->label1->TabIndex = 70;
			this->label1->Text = L"Номер задания";
			// 
			// button_in_back
			// 
			this->button_in_back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_in_back->Location = System::Drawing::Point(29, 395);
			this->button_in_back->Name = L"button_in_back";
			this->button_in_back->Size = System::Drawing::Size(75, 23);
			this->button_in_back->TabIndex = 69;
			this->button_in_back->Text = L"Назад";
			this->button_in_back->UseVisualStyleBackColor = true;
			this->button_in_back->Click += gcnew System::EventHandler(this, &RequestProjForm::button_in_back_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(498, 122);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(126, 15);
			this->label7->TabIndex = 86;
			this->label7->Text = L"По запросу найдено:";
			// 
			// dateEnd
			// 
			this->dateEnd->Location = System::Drawing::Point(840, 67);
			this->dateEnd->Mask = L"00/00/0000";
			this->dateEnd->Name = L"dateEnd";
			this->dateEnd->Size = System::Drawing::Size(68, 20);
			this->dateEnd->TabIndex = 93;
			this->dateEnd->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RequestProjForm::taskNumber_KeyDown);
			// 
			// volume
			// 
			this->volume->Location = System::Drawing::Point(1003, 66);
			this->volume->Mask = L"00000";
			this->volume->Name = L"volume";
			this->volume->Size = System::Drawing::Size(42, 20);
			this->volume->TabIndex = 92;
			this->volume->ValidatingType = System::Int32::typeid;
			this->volume->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RequestProjForm::taskNumber_KeyDown);
			// 
			// taskNumber
			// 
			this->taskNumber->Location = System::Drawing::Point(70, 66);
			this->taskNumber->Mask = L"00/0";
			this->taskNumber->Name = L"taskNumber";
			this->taskNumber->Size = System::Drawing::Size(40, 20);
			this->taskNumber->TabIndex = 91;
			this->taskNumber->ValidatingType = System::DateTime::typeid;
			this->taskNumber->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RequestProjForm::taskNumber_KeyDown);
			// 
			// dateReg
			// 
			this->dateReg->Location = System::Drawing::Point(203, 66);
			this->dateReg->Mask = L"00/00/0000";
			this->dateReg->Name = L"dateReg";
			this->dateReg->Size = System::Drawing::Size(68, 20);
			this->dateReg->TabIndex = 90;
			this->dateReg->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RequestProjForm::taskNumber_KeyDown);
			// 
			// cipher
			// 
			this->cipher->Location = System::Drawing::Point(368, 66);
			this->cipher->Mask = L"00-000";
			this->cipher->Name = L"cipher";
			this->cipher->Size = System::Drawing::Size(57, 20);
			this->cipher->TabIndex = 89;
			this->cipher->ValidatingType = System::Int32::typeid;
			this->cipher->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RequestProjForm::taskNumber_KeyDown);
			// 
			// projName
			// 
			this->projName->Location = System::Drawing::Point(491, 66);
			this->projName->MaxLength = 50;
			this->projName->Name = L"projName";
			this->projName->Size = System::Drawing::Size(133, 20);
			this->projName->TabIndex = 88;
			this->projName->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RequestProjForm::taskNumber_KeyDown);
			// 
			// sign
			// 
			this->sign->FormattingEnabled = true;
			this->sign->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"=", L"<=", L">=" });
			this->sign->Location = System::Drawing::Point(962, 66);
			this->sign->Name = L"sign";
			this->sign->Size = System::Drawing::Size(35, 21);
			this->sign->TabIndex = 94;
			this->sign->Text = L"=";
			this->sign->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RequestProjForm::taskNumber_KeyDown);
			this->sign->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &RequestProjForm::sign_KeyPress);
			// 
			// surname
			// 
			this->surname->FormattingEnabled = true;
			this->surname->Location = System::Drawing::Point(668, 66);
			this->surname->Name = L"surname";
			this->surname->Size = System::Drawing::Size(117, 21);
			this->surname->TabIndex = 96;
			this->surname->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RequestProjForm::taskNumber_KeyDown);
			this->surname->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &RequestProjForm::surname_KeyPress);
			// 
			// RequestProjForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1120, 437);
			this->Controls->Add(this->surname);
			this->Controls->Add(this->sign);
			this->Controls->Add(this->dateEnd);
			this->Controls->Add(this->volume);
			this->Controls->Add(this->taskNumber);
			this->Controls->Add(this->dateReg);
			this->Controls->Add(this->cipher);
			this->Controls->Add(this->projName);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dataGridView);
			this->Controls->Add(this->button_in_ok);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_in_back);
			this->MaximizeBox = false;
			this->Name = L"RequestProjForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Составление запроса по проектам";
			this->Load += gcnew System::EventHandler(this, &RequestProjForm::RequestProjForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_in_ok_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_in_back_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void RequestProjForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void sign_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
	private: System::Void surname_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
	private: System::Void taskNumber_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
};
}
