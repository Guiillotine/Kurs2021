#pragma once

namespace Kurs2021 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AddZdForm
	/// </summary>
	public ref class AddZdForm : public System::Windows::Forms::Form
	{
	public:
		AddZdForm(void)
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
		~AddZdForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ status;

	protected:


	protected:

	private: System::Windows::Forms::TextBox^ task;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ note;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ surname0;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridView^ dataGridView_in;
	private: System::Windows::Forms::Button^ button_in_ok;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ customer;





	private: System::Windows::Forms::Button^ button_in_back;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_numb;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_fio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_napr;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_kurs;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_chas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_att;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_prim;
	private: System::Windows::Forms::MaskedTextBox^ taskNumber;
	private: System::Windows::Forms::MaskedTextBox^ date;

	private: System::Windows::Forms::MaskedTextBox^ projNumber;
	private: System::Windows::Forms::Label^ label10;
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
			this->status = (gcnew System::Windows::Forms::TextBox());
			this->task = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->note = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->surname0 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView_in = (gcnew System::Windows::Forms::DataGridView());
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
			this->customer = (gcnew System::Windows::Forms::TextBox());
			this->button_in_back = (gcnew System::Windows::Forms::Button());
			this->taskNumber = (gcnew System::Windows::Forms::MaskedTextBox());
			this->date = (gcnew System::Windows::Forms::MaskedTextBox());
			this->projNumber = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->surname = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_in))->BeginInit();
			this->SuspendLayout();
			// 
			// status
			// 
			this->status->Location = System::Drawing::Point(822, 65);
			this->status->MaxLength = 15;
			this->status->Name = L"status";
			this->status->Size = System::Drawing::Size(89, 20);
			this->status->TabIndex = 49;
			// 
			// task
			// 
			this->task->Location = System::Drawing::Point(413, 65);
			this->task->MaxLength = 50;
			this->task->Name = L"task";
			this->task->Size = System::Drawing::Size(133, 20);
			this->task->TabIndex = 46;
			// 
			// label9
			// 
			this->label9->Location = System::Drawing::Point(978, 38);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(72, 19);
			this->label9->TabIndex = 45;
			this->label9->Text = L"Примечание";
			// 
			// note
			// 
			this->note->Location = System::Drawing::Point(944, 65);
			this->note->MaxLength = 50;
			this->note->Name = L"note";
			this->note->Size = System::Drawing::Size(145, 20);
			this->note->TabIndex = 44;
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(841, 38);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 19);
			this->label8->TabIndex = 43;
			this->label8->Text = L"  Статус";
			// 
			// surname0
			// 
			this->surname0->Location = System::Drawing::Point(676, 256);
			this->surname0->MaxLength = 20;
			this->surname0->Name = L"surname0";
			this->surname0->Size = System::Drawing::Size(121, 20);
			this->surname0->TabIndex = 42;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(493, 118);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(142, 15);
			this->label7->TabIndex = 41;
			this->label7->Text = L"Добавленные задания:";
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
			this->dataGridView_in->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column_numb,
					this->Column_name, this->Column_fio, this->Column_napr, this->Column_kurs, this->Column_chas, this->Column_att, this->Column_prim
			});
			this->dataGridView_in->Location = System::Drawing::Point(25, 136);
			this->dataGridView_in->Name = L"dataGridView_in";
			this->dataGridView_in->ReadOnly = true;
			this->dataGridView_in->RowHeadersVisible = false;
			this->dataGridView_in->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView_in->Size = System::Drawing::Size(1064, 105);
			this->dataGridView_in->TabIndex = 40;
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
			this->Column_name->HeaderText = L"Дата выд. задания";
			this->Column_name->Name = L"Column_name";
			this->Column_name->ReadOnly = true;
			this->Column_name->Width = 90;
			// 
			// Column_fio
			// 
			this->Column_fio->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
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
			this->Column_kurs->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column_kurs->HeaderText = L"Номер проекта";
			this->Column_kurs->Name = L"Column_kurs";
			this->Column_kurs->ReadOnly = true;
			this->Column_kurs->Width = 90;
			// 
			// Column_chas
			// 
			this->Column_chas->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column_chas->HeaderText = L"Фамилия инженера-конструктора";
			this->Column_chas->Name = L"Column_chas";
			this->Column_chas->ReadOnly = true;
			this->Column_chas->Width = 160;
			// 
			// Column_att
			// 
			this->Column_att->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column_att->HeaderText = L"Статус";
			this->Column_att->Name = L"Column_att";
			this->Column_att->ReadOnly = true;
			this->Column_att->Width = 90;
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
			this->button_in_ok->Location = System::Drawing::Point(1014, 256);
			this->button_in_ok->Name = L"button_in_ok";
			this->button_in_ok->Size = System::Drawing::Size(75, 23);
			this->button_in_ok->TabIndex = 39;
			this->button_in_ok->Text = L"Ок";
			this->button_in_ok->UseVisualStyleBackColor = true;
			this->button_in_ok->Click += gcnew System::EventHandler(this, &AddZdForm::button_in_ok_Click);
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(666, 29);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(131, 28);
			this->label6->TabIndex = 38;
			this->label6->Text = L"            Фамилия инженера-конструктора";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(585, 29);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 28);
			this->label5->TabIndex = 37;
			this->label5->Text = L" Номер проекта";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(421, 38);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 13);
			this->label4->TabIndex = 36;
			this->label4->Text = L"Содержание задания";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(280, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 28);
			this->label3->TabIndex = 35;
			this->label3->Text = L"Наименование       заказчика";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(36, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 13);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Номер задания";
			// 
			// customer
			// 
			this->customer->Location = System::Drawing::Point(267, 65);
			this->customer->MaxLength = 15;
			this->customer->Name = L"customer";
			this->customer->Size = System::Drawing::Size(114, 20);
			this->customer->TabIndex = 32;
			// 
			// button_in_back
			// 
			this->button_in_back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_in_back->Location = System::Drawing::Point(25, 256);
			this->button_in_back->Name = L"button_in_back";
			this->button_in_back->Size = System::Drawing::Size(75, 23);
			this->button_in_back->TabIndex = 30;
			this->button_in_back->Text = L"Назад";
			this->button_in_back->UseVisualStyleBackColor = true;
			this->button_in_back->Click += gcnew System::EventHandler(this, &AddZdForm::button_in_back_Click);
			// 
			// taskNumber
			// 
			this->taskNumber->Location = System::Drawing::Point(60, 65);
			this->taskNumber->Mask = L"00/0";
			this->taskNumber->Name = L"taskNumber";
			this->taskNumber->Size = System::Drawing::Size(40, 20);
			this->taskNumber->TabIndex = 72;
			this->taskNumber->ValidatingType = System::DateTime::typeid;
			// 
			// date
			// 
			this->date->Location = System::Drawing::Point(154, 65);
			this->date->Mask = L"00/00/0000";
			this->date->Name = L"date";
			this->date->Size = System::Drawing::Size(68, 20);
			this->date->TabIndex = 73;
			// 
			// projNumber
			// 
			this->projNumber->Location = System::Drawing::Point(578, 65);
			this->projNumber->Mask = L"00-000";
			this->projNumber->Name = L"projNumber";
			this->projNumber->Size = System::Drawing::Size(57, 20);
			this->projNumber->TabIndex = 75;
			this->projNumber->ValidatingType = System::Int32::typeid;
			// 
			// label10
			// 
			this->label10->Location = System::Drawing::Point(151, 38);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(89, 28);
			this->label10->TabIndex = 76;
			this->label10->Text = L"Дата выдачи          задания";
			// 
			// surname
			// 
			this->surname->FormattingEnabled = true;
			this->surname->Location = System::Drawing::Point(669, 65);
			this->surname->Name = L"surname";
			this->surname->Size = System::Drawing::Size(117, 21);
			this->surname->TabIndex = 97;
			// 
			// AddZdForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1124, 289);
			this->Controls->Add(this->surname);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->projNumber);
			this->Controls->Add(this->date);
			this->Controls->Add(this->taskNumber);
			this->Controls->Add(this->status);
			this->Controls->Add(this->task);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->note);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->surname0);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dataGridView_in);
			this->Controls->Add(this->button_in_ok);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->customer);
			this->Controls->Add(this->button_in_back);
			this->MaximizeBox = false;
			this->Name = L"AddZdForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Добавление заданий на проектирование";
			this->Load += gcnew System::EventHandler(this, &AddZdForm::AddZdForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_in))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_in_back_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_in_ok_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void AddZdForm_Load(System::Object^ sender, System::EventArgs^ e);
};
}
