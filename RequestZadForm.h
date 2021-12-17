#pragma once

namespace Kurs2021 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для RequestZadForm
	/// </summary>
	public ref class RequestZadForm : public System::Windows::Forms::Form
	{
	public:
		RequestZadForm(void)
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
		~RequestZadForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox6;
	protected:
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox_fio_in;
	private: System::Windows::Forms::TextBox^ textBox_name_in;
	private: System::Windows::Forms::DataGridView^ dataGridView_in;
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
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_fio_in = (gcnew System::Windows::Forms::TextBox());
			this->textBox_name_in = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView_in = (gcnew System::Windows::Forms::DataGridView());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_in))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(844, 72);
			this->textBox6->MaxLength = 16;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(96, 20);
			this->textBox6->TabIndex = 93;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(603, 70);
			this->textBox5->MaxLength = 16;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(71, 20);
			this->textBox5->TabIndex = 92;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(151, 70);
			this->textBox2->MaxLength = 16;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(106, 20);
			this->textBox2->TabIndex = 91;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(439, 72);
			this->textBox4->MaxLength = 16;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(133, 20);
			this->textBox4->TabIndex = 90;
			// 
			// label9
			// 
			this->label9->Location = System::Drawing::Point(992, 43);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(72, 19);
			this->label9->TabIndex = 89;
			this->label9->Text = L"Примечание";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(971, 72);
			this->textBox3->MaxLength = 16;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(114, 20);
			this->textBox3->TabIndex = 88;
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(866, 43);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 19);
			this->label8->TabIndex = 87;
			this->label8->Text = L"  Статус";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(704, 72);
			this->textBox1->MaxLength = 16;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 20);
			this->textBox1->TabIndex = 86;
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(701, 34);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(131, 28);
			this->label6->TabIndex = 85;
			this->label6->Text = L"            Фамилия инженера-конструктора";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(615, 34);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 28);
			this->label5->TabIndex = 84;
			this->label5->Text = L" Номер проекта";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(448, 43);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 13);
			this->label4->TabIndex = 83;
			this->label4->Text = L"Содержание задания";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(309, 41);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 28);
			this->label3->TabIndex = 82;
			this->label3->Text = L"Наименование       заказчика";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(146, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 13);
			this->label2->TabIndex = 81;
			this->label2->Text = L"Дата выдачи задания";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 13);
			this->label1->TabIndex = 80;
			this->label1->Text = L"Номер задания";
			// 
			// textBox_fio_in
			// 
			this->textBox_fio_in->Location = System::Drawing::Point(293, 72);
			this->textBox_fio_in->MaxLength = 16;
			this->textBox_fio_in->Name = L"textBox_fio_in";
			this->textBox_fio_in->Size = System::Drawing::Size(114, 20);
			this->textBox_fio_in->TabIndex = 79;
			// 
			// textBox_name_in
			// 
			this->textBox_name_in->Location = System::Drawing::Point(45, 72);
			this->textBox_name_in->MaxLength = 14;
			this->textBox_name_in->Name = L"textBox_name_in";
			this->textBox_name_in->Size = System::Drawing::Size(83, 20);
			this->textBox_name_in->TabIndex = 78;
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
			this->dataGridView_in->Location = System::Drawing::Point(21, 151);
			this->dataGridView_in->Name = L"dataGridView_in";
			this->dataGridView_in->ReadOnly = true;
			this->dataGridView_in->RowHeadersVisible = false;
			this->dataGridView_in->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView_in->Size = System::Drawing::Size(1064, 198);
			this->dataGridView_in->TabIndex = 77;
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
			this->button_ok_req->Click += gcnew System::EventHandler(this, &RequestZadForm::button_ok_req_Click);
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
			this->button_back_req->Click += gcnew System::EventHandler(this, &RequestZadForm::button_back_req_Click);
			// 
			// RequestZadForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1109, 410);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_fio_in);
			this->Controls->Add(this->textBox_name_in);
			this->Controls->Add(this->dataGridView_in);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button_ok_req);
			this->Controls->Add(this->button_back_req);
			this->MaximizeBox = false;
			this->Name = L"RequestZadForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Составление запроса по заданиям";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_in))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_back_req_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_ok_req_Click(System::Object^ sender, System::EventArgs^ e);
};
}
