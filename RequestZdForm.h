#pragma once

namespace Kurs2021 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для RequestZdForm
	/// </summary>
	public ref class RequestZdForm : public System::Windows::Forms::Form
	{
	public:
		RequestZdForm(void)
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
		~RequestZdForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::DataGridView^ dataGridView;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_numb;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_fio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_napr;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_kurs;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_chas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_att;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_prim;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button_ok_req;
	private: System::Windows::Forms::Button^ button_back_req;
	private: System::Windows::Forms::MaskedTextBox^ projNumber;
	private: System::Windows::Forms::MaskedTextBox^ date;
	private: System::Windows::Forms::MaskedTextBox^ taskNumber;
	private: System::Windows::Forms::TextBox^ status;




	private: System::Windows::Forms::TextBox^ customer;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RequestZdForm::typeid));
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Column_numb = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_fio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_napr = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_kurs = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_chas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_att = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_prim = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button_ok_req = (gcnew System::Windows::Forms::Button());
			this->button_back_req = (gcnew System::Windows::Forms::Button());
			this->projNumber = (gcnew System::Windows::Forms::MaskedTextBox());
			this->date = (gcnew System::Windows::Forms::MaskedTextBox());
			this->taskNumber = (gcnew System::Windows::Forms::MaskedTextBox());
			this->status = (gcnew System::Windows::Forms::TextBox());
			this->customer = (gcnew System::Windows::Forms::TextBox());
			this->surname = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(951, 49);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 19);
			this->label8->TabIndex = 87;
			this->label8->Text = L"  Статус";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(716, 34);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(131, 28);
			this->label6->TabIndex = 85;
			this->label6->Text = L"            Фамилия инженера-конструктора";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(581, 34);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 28);
			this->label5->TabIndex = 84;
			this->label5->Text = L" Номер проекта";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(395, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 28);
			this->label3->TabIndex = 82;
			this->label3->Text = L"Наименование       заказчика";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(205, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 13);
			this->label2->TabIndex = 81;
			this->label2->Text = L"Дата выдачи задания";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(79, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 13);
			this->label1->TabIndex = 80;
			this->label1->Text = L"Номер задания";
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
			this->dataGridView->Location = System::Drawing::Point(21, 151);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->ReadOnly = true;
			this->dataGridView->RowHeadersVisible = false;
			this->dataGridView->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView->Size = System::Drawing::Size(1064, 198);
			this->dataGridView->TabIndex = 77;
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
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(515, 124);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(126, 15);
			this->label7->TabIndex = 76;
			this->label7->Text = L"По запросу найдено:";
			// 
			// button_ok_req
			// 
			this->button_ok_req->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_ok_req->Location = System::Drawing::Point(1017, 370);
			this->button_ok_req->Name = L"button_ok_req";
			this->button_ok_req->Size = System::Drawing::Size(75, 23);
			this->button_ok_req->TabIndex = 75;
			this->button_ok_req->Text = L"Ок";
			this->button_ok_req->UseVisualStyleBackColor = true;
			this->button_ok_req->Click += gcnew System::EventHandler(this, &RequestZdForm::button_ok_req_Click);
			// 
			// button_back_req
			// 
			this->button_back_req->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_back_req->Location = System::Drawing::Point(28, 370);
			this->button_back_req->Name = L"button_back_req";
			this->button_back_req->Size = System::Drawing::Size(75, 23);
			this->button_back_req->TabIndex = 74;
			this->button_back_req->Text = L"Назад";
			this->button_back_req->UseVisualStyleBackColor = true;
			this->button_back_req->Click += gcnew System::EventHandler(this, &RequestZdForm::button_back_req_Click);
			// 
			// projNumber
			// 
			this->projNumber->Location = System::Drawing::Point(575, 74);
			this->projNumber->Mask = L"00-000";
			this->projNumber->Name = L"projNumber";
			this->projNumber->Size = System::Drawing::Size(57, 20);
			this->projNumber->TabIndex = 97;
			this->projNumber->ValidatingType = System::Int32::typeid;
			this->projNumber->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RequestZdForm::taskNumber_KeyDown);
			// 
			// date
			// 
			this->date->Location = System::Drawing::Point(241, 75);
			this->date->Mask = L"00/00/0000";
			this->date->Name = L"date";
			this->date->Size = System::Drawing::Size(68, 20);
			this->date->TabIndex = 96;
			this->date->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RequestZdForm::taskNumber_KeyDown);
			// 
			// taskNumber
			// 
			this->taskNumber->Location = System::Drawing::Point(102, 74);
			this->taskNumber->Mask = L"00/0";
			this->taskNumber->Name = L"taskNumber";
			this->taskNumber->Size = System::Drawing::Size(40, 20);
			this->taskNumber->TabIndex = 95;
			this->taskNumber->ValidatingType = System::DateTime::typeid;
			this->taskNumber->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RequestZdForm::taskNumber_KeyDown);
			// 
			// status
			// 
			this->status->Location = System::Drawing::Point(931, 74);
			this->status->MaxLength = 15;
			this->status->Name = L"status";
			this->status->Size = System::Drawing::Size(89, 20);
			this->status->TabIndex = 94;
			this->status->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RequestZdForm::taskNumber_KeyDown);
			// 
			// customer
			// 
			this->customer->Location = System::Drawing::Point(380, 75);
			this->customer->MaxLength = 15;
			this->customer->Name = L"customer";
			this->customer->Size = System::Drawing::Size(114, 20);
			this->customer->TabIndex = 90;
			this->customer->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RequestZdForm::taskNumber_KeyDown);
			// 
			// surname
			// 
			this->surname->FormattingEnabled = true;
			this->surname->Location = System::Drawing::Point(709, 74);
			this->surname->Name = L"surname";
			this->surname->Size = System::Drawing::Size(138, 21);
			this->surname->TabIndex = 98;
			this->surname->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RequestZdForm::taskNumber_KeyDown);
			this->surname->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &RequestZdForm::surname_KeyPress);
			// 
			// RequestZdForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1109, 410);
			this->Controls->Add(this->surname);
			this->Controls->Add(this->projNumber);
			this->Controls->Add(this->date);
			this->Controls->Add(this->taskNumber);
			this->Controls->Add(this->status);
			this->Controls->Add(this->customer);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button_ok_req);
			this->Controls->Add(this->button_back_req);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"RequestZdForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Составление запроса по заданиям";
			this->Load += gcnew System::EventHandler(this, &RequestZdForm::RequestZdForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_back_req_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_ok_req_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void RequestZdForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void surname_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
	private: System::Void taskNumber_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
};
}
