#pragma once

namespace Kurs2021 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для CorrectZdForm
	/// </summary>
	public ref class CorrectZdForm : public System::Windows::Forms::Form
	{
	public:
		CorrectZdForm(void)
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
		~CorrectZdForm()
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_prim;
	private: System::Windows::Forms::Button^ button_in_ok;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Button^ button_in_back;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::MaskedTextBox^ projNumber;
	private: System::Windows::Forms::MaskedTextBox^ date;
	private: System::Windows::Forms::MaskedTextBox^ taskNumber;
	private: System::Windows::Forms::TextBox^ status;
	private: System::Windows::Forms::TextBox^ task;
	private: System::Windows::Forms::TextBox^ note;
	private: System::Windows::Forms::TextBox^ surname0;

	private: System::Windows::Forms::TextBox^ customer;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::MaskedTextBox^ number;
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
			this->Column_prim = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button_in_ok = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_in_back = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->projNumber = (gcnew System::Windows::Forms::MaskedTextBox());
			this->date = (gcnew System::Windows::Forms::MaskedTextBox());
			this->taskNumber = (gcnew System::Windows::Forms::MaskedTextBox());
			this->status = (gcnew System::Windows::Forms::TextBox());
			this->task = (gcnew System::Windows::Forms::TextBox());
			this->note = (gcnew System::Windows::Forms::TextBox());
			this->surname0 = (gcnew System::Windows::Forms::TextBox());
			this->customer = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->number = (gcnew System::Windows::Forms::MaskedTextBox());
			this->surname = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// label9
			// 
			this->label9->Location = System::Drawing::Point(969, 34);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(72, 19);
			this->label9->TabIndex = 70;
			this->label9->Text = L"Примечание";
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(848, 34);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 19);
			this->label8->TabIndex = 68;
			this->label8->Text = L"  Статус";
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
			this->dataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column_numb,
					this->Column_name, this->Column_fio, this->Column_napr, this->Column_kurs, this->Column_chas, this->Column_att, this->Column_prim
			});
			this->dataGridView->Location = System::Drawing::Point(20, 141);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->ReadOnly = true;
			this->dataGridView->RowHeadersVisible = false;
			this->dataGridView->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView->Size = System::Drawing::Size(1064, 64);
			this->dataGridView->TabIndex = 66;
			// 
			// Column_numb
			// 
			this->Column_numb->HeaderText = L"Номер задания";
			this->Column_numb->Name = L"Column_numb";
			this->Column_numb->ReadOnly = true;
			// 
			// Column_name
			// 
			this->Column_name->HeaderText = L"Дата выдачи задания";
			this->Column_name->Name = L"Column_name";
			this->Column_name->ReadOnly = true;
			// 
			// Column_fio
			// 
			this->Column_fio->HeaderText = L"Наименование заказчика";
			this->Column_fio->Name = L"Column_fio";
			this->Column_fio->ReadOnly = true;
			// 
			// Column_napr
			// 
			this->Column_napr->HeaderText = L"Содержание задания";
			this->Column_napr->Name = L"Column_napr";
			this->Column_napr->ReadOnly = true;
			// 
			// Column_kurs
			// 
			this->Column_kurs->HeaderText = L"Номер проекта";
			this->Column_kurs->Name = L"Column_kurs";
			this->Column_kurs->ReadOnly = true;
			// 
			// Column_chas
			// 
			this->Column_chas->HeaderText = L"Фамилия инженера-конструктора";
			this->Column_chas->Name = L"Column_chas";
			this->Column_chas->ReadOnly = true;
			// 
			// Column_att
			// 
			this->Column_att->HeaderText = L"Статус";
			this->Column_att->Name = L"Column_att";
			this->Column_att->ReadOnly = true;
			// 
			// Column_prim
			// 
			this->Column_prim->HeaderText = L"Примечание";
			this->Column_prim->Name = L"Column_prim";
			this->Column_prim->ReadOnly = true;
			// 
			// button_in_ok
			// 
			this->button_in_ok->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_in_ok->Location = System::Drawing::Point(1009, 221);
			this->button_in_ok->Name = L"button_in_ok";
			this->button_in_ok->Size = System::Drawing::Size(75, 23);
			this->button_in_ok->TabIndex = 65;
			this->button_in_ok->Text = L"Ок";
			this->button_in_ok->UseVisualStyleBackColor = true;
			this->button_in_ok->Click += gcnew System::EventHandler(this, &CorrectZdForm::button_in_ok_Click);
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(676, 25);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(131, 28);
			this->label6->TabIndex = 64;
			this->label6->Text = L"            Фамилия инженера-конструктора";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(596, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 28);
			this->label5->TabIndex = 63;
			this->label5->Text = L" Номер проекта";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(436, 34);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 13);
			this->label4->TabIndex = 62;
			this->label4->Text = L"Содержание задания";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(292, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 28);
			this->label3->TabIndex = 61;
			this->label3->Text = L"Наименование       заказчика";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(82, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 13);
			this->label1->TabIndex = 59;
			this->label1->Text = L"Номер задания";
			// 
			// button_in_back
			// 
			this->button_in_back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_in_back->Location = System::Drawing::Point(20, 221);
			this->button_in_back->Name = L"button_in_back";
			this->button_in_back->Size = System::Drawing::Size(75, 23);
			this->button_in_back->TabIndex = 56;
			this->button_in_back->Text = L"Назад";
			this->button_in_back->UseVisualStyleBackColor = true;
			this->button_in_back->Click += gcnew System::EventHandler(this, &CorrectZdForm::button_in_back_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(473, 114);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(173, 15);
			this->label7->TabIndex = 55;
			this->label7->Text = L"Отредактированная строка:";
			// 
			// projNumber
			// 
			this->projNumber->Enabled = false;
			this->projNumber->Location = System::Drawing::Point(589, 63);
			this->projNumber->Mask = L"00-000";
			this->projNumber->Name = L"projNumber";
			this->projNumber->Size = System::Drawing::Size(57, 20);
			this->projNumber->TabIndex = 83;
			this->projNumber->ValidatingType = System::Int32::typeid;
			// 
			// date
			// 
			this->date->Enabled = false;
			this->date->Location = System::Drawing::Point(181, 63);
			this->date->Mask = L"00/00/0000";
			this->date->Name = L"date";
			this->date->Size = System::Drawing::Size(68, 20);
			this->date->TabIndex = 82;
			// 
			// taskNumber
			// 
			this->taskNumber->Enabled = false;
			this->taskNumber->Location = System::Drawing::Point(102, 63);
			this->taskNumber->Mask = L"00/0";
			this->taskNumber->Name = L"taskNumber";
			this->taskNumber->Size = System::Drawing::Size(40, 20);
			this->taskNumber->TabIndex = 81;
			this->taskNumber->ValidatingType = System::DateTime::typeid;
			// 
			// status
			// 
			this->status->Enabled = false;
			this->status->Location = System::Drawing::Point(827, 63);
			this->status->MaxLength = 15;
			this->status->Name = L"status";
			this->status->Size = System::Drawing::Size(89, 20);
			this->status->TabIndex = 80;
			// 
			// task
			// 
			this->task->Enabled = false;
			this->task->Location = System::Drawing::Point(427, 63);
			this->task->MaxLength = 50;
			this->task->Name = L"task";
			this->task->Size = System::Drawing::Size(133, 20);
			this->task->TabIndex = 79;
			// 
			// note
			// 
			this->note->Enabled = false;
			this->note->Location = System::Drawing::Point(936, 63);
			this->note->MaxLength = 50;
			this->note->Name = L"note";
			this->note->Size = System::Drawing::Size(133, 20);
			this->note->TabIndex = 78;
			// 
			// surname0
			// 
			this->surname0->Enabled = false;
			this->surname0->Location = System::Drawing::Point(665, 224);
			this->surname0->MaxLength = 20;
			this->surname0->Name = L"surname0";
			this->surname0->Size = System::Drawing::Size(121, 20);
			this->surname0->TabIndex = 77;
			// 
			// customer
			// 
			this->customer->Enabled = false;
			this->customer->Location = System::Drawing::Point(280, 63);
			this->customer->MaxLength = 15;
			this->customer->Name = L"customer";
			this->customer->Size = System::Drawing::Size(114, 20);
			this->customer->TabIndex = 76;
			// 
			// label10
			// 
			this->label10->Location = System::Drawing::Point(178, 31);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(89, 28);
			this->label10->TabIndex = 84;
			this->label10->Text = L"Дата выдачи          задания";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 13);
			this->label2->TabIndex = 97;
			this->label2->Text = L"№";
			// 
			// number
			// 
			this->number->Location = System::Drawing::Point(20, 63);
			this->number->Mask = L"00000";
			this->number->Name = L"number";
			this->number->Size = System::Drawing::Size(42, 20);
			this->number->TabIndex = 96;
			this->number->ValidatingType = System::Int32::typeid;
			this->number->TextChanged += gcnew System::EventHandler(this, &CorrectZdForm::number_TextChanged);
			// 
			// surname
			// 
			this->surname->FormattingEnabled = true;
			this->surname->Location = System::Drawing::Point(679, 63);
			this->surname->Name = L"surname";
			this->surname->Size = System::Drawing::Size(117, 21);
			this->surname->TabIndex = 98;
			// 
			// CorrectZdForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1102, 265);
			this->Controls->Add(this->surname);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->number);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->projNumber);
			this->Controls->Add(this->date);
			this->Controls->Add(this->taskNumber);
			this->Controls->Add(this->status);
			this->Controls->Add(this->task);
			this->Controls->Add(this->note);
			this->Controls->Add(this->surname0);
			this->Controls->Add(this->customer);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dataGridView);
			this->Controls->Add(this->button_in_ok);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_in_back);
			this->Controls->Add(this->label7);
			this->MaximizeBox = false;
			this->Name = L"CorrectZdForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Редактирование заданий";
			this->Load += gcnew System::EventHandler(this, &CorrectZdForm::CorrectZdForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_in_ok_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_in_back_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void number_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void CorrectZdForm_Load(System::Object^ sender, System::EventArgs^ e);
};
}
