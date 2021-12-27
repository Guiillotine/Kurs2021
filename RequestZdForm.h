#pragma once

namespace Kurs2021 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� RequestZdForm
	/// </summary>
	public ref class RequestZdForm : public System::Windows::Forms::Form
	{
	public:
		RequestZdForm(void)
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
		~RequestZdForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
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
	private: System::Windows::Forms::TextBox^ task;
	private: System::Windows::Forms::TextBox^ note;
	private: System::Windows::Forms::TextBox^ surname;
	private: System::Windows::Forms::TextBox^ customer;

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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
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
			this->task = (gcnew System::Windows::Forms::TextBox());
			this->note = (gcnew System::Windows::Forms::TextBox());
			this->surname = (gcnew System::Windows::Forms::TextBox());
			this->customer = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// label9
			// 
			this->label9->Location = System::Drawing::Point(976, 43);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(72, 19);
			this->label9->TabIndex = 89;
			this->label9->Text = L"����������";
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(831, 43);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 19);
			this->label8->TabIndex = 87;
			this->label8->Text = L"  ������";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(652, 34);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(131, 28);
			this->label6->TabIndex = 85;
			this->label6->Text = L"            ������� ��������-������������";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(572, 34);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 28);
			this->label5->TabIndex = 84;
			this->label5->Text = L" ����� �������";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(416, 49);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 13);
			this->label4->TabIndex = 83;
			this->label4->Text = L"���������� �������";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(277, 43);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 28);
			this->label3->TabIndex = 82;
			this->label3->Text = L"������������       ���������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(126, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 13);
			this->label2->TabIndex = 81;
			this->label2->Text = L"���� ������ �������";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 13);
			this->label1->TabIndex = 80;
			this->label1->Text = L"����� �������";
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
			this->Column_numb->HeaderText = L"����� �������";
			this->Column_numb->Name = L"Column_numb";
			this->Column_numb->ReadOnly = true;
			// 
			// Column_name
			// 
			this->Column_name->HeaderText = L"���� ������ �������";
			this->Column_name->Name = L"Column_name";
			this->Column_name->ReadOnly = true;
			// 
			// Column_fio
			// 
			this->Column_fio->HeaderText = L"������������ ���������";
			this->Column_fio->Name = L"Column_fio";
			this->Column_fio->ReadOnly = true;
			// 
			// Column_napr
			// 
			this->Column_napr->HeaderText = L"���������� �������";
			this->Column_napr->Name = L"Column_napr";
			this->Column_napr->ReadOnly = true;
			// 
			// Column_kurs
			// 
			this->Column_kurs->HeaderText = L"����� �������";
			this->Column_kurs->Name = L"Column_kurs";
			this->Column_kurs->ReadOnly = true;
			// 
			// Column_chas
			// 
			this->Column_chas->HeaderText = L"������� ��������-������������";
			this->Column_chas->Name = L"Column_chas";
			this->Column_chas->ReadOnly = true;
			// 
			// Column_att
			// 
			this->Column_att->HeaderText = L"������";
			this->Column_att->Name = L"Column_att";
			this->Column_att->ReadOnly = true;
			// 
			// Column_prim
			// 
			this->Column_prim->HeaderText = L"����������";
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
			this->label7->Text = L"�� ������� �������:";
			// 
			// button_ok_req
			// 
			this->button_ok_req->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_ok_req->Location = System::Drawing::Point(1017, 370);
			this->button_ok_req->Name = L"button_ok_req";
			this->button_ok_req->Size = System::Drawing::Size(75, 23);
			this->button_ok_req->TabIndex = 75;
			this->button_ok_req->Text = L"��";
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
			this->button_back_req->Text = L"�����";
			this->button_back_req->UseVisualStyleBackColor = true;
			this->button_back_req->Click += gcnew System::EventHandler(this, &RequestZdForm::button_back_req_Click);
			// 
			// projNumber
			// 
			this->projNumber->Location = System::Drawing::Point(566, 75);
			this->projNumber->Mask = L"00-000";
			this->projNumber->Name = L"projNumber";
			this->projNumber->Size = System::Drawing::Size(57, 20);
			this->projNumber->TabIndex = 97;
			this->projNumber->ValidatingType = System::Int32::typeid;
			// 
			// date
			// 
			this->date->Location = System::Drawing::Point(149, 75);
			this->date->Mask = L"00/00/0000";
			this->date->Name = L"date";
			this->date->Size = System::Drawing::Size(68, 20);
			this->date->TabIndex = 96;
			// 
			// taskNumber
			// 
			this->taskNumber->Location = System::Drawing::Point(55, 75);
			this->taskNumber->Mask = L"00/0";
			this->taskNumber->Name = L"taskNumber";
			this->taskNumber->Size = System::Drawing::Size(40, 20);
			this->taskNumber->TabIndex = 95;
			this->taskNumber->ValidatingType = System::DateTime::typeid;
			// 
			// status
			// 
			this->status->Location = System::Drawing::Point(813, 75);
			this->status->MaxLength = 15;
			this->status->Name = L"status";
			this->status->Size = System::Drawing::Size(89, 20);
			this->status->TabIndex = 94;
			// 
			// task
			// 
			this->task->Location = System::Drawing::Point(408, 75);
			this->task->MaxLength = 50;
			this->task->Name = L"task";
			this->task->Size = System::Drawing::Size(133, 20);
			this->task->TabIndex = 93;
			// 
			// note
			// 
			this->note->Location = System::Drawing::Point(939, 75);
			this->note->MaxLength = 50;
			this->note->Name = L"note";
			this->note->Size = System::Drawing::Size(145, 20);
			this->note->TabIndex = 92;
			// 
			// surname
			// 
			this->surname->Location = System::Drawing::Point(655, 75);
			this->surname->MaxLength = 20;
			this->surname->Name = L"surname";
			this->surname->Size = System::Drawing::Size(121, 20);
			this->surname->TabIndex = 91;
			// 
			// customer
			// 
			this->customer->Location = System::Drawing::Point(262, 75);
			this->customer->MaxLength = 15;
			this->customer->Name = L"customer";
			this->customer->Size = System::Drawing::Size(114, 20);
			this->customer->TabIndex = 90;
			// 
			// RequestZdForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1109, 410);
			this->Controls->Add(this->projNumber);
			this->Controls->Add(this->date);
			this->Controls->Add(this->taskNumber);
			this->Controls->Add(this->status);
			this->Controls->Add(this->task);
			this->Controls->Add(this->note);
			this->Controls->Add(this->surname);
			this->Controls->Add(this->customer);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button_ok_req);
			this->Controls->Add(this->button_back_req);
			this->MaximizeBox = false;
			this->Name = L"RequestZdForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"����������� ������� �� ��������";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_back_req_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_ok_req_Click(System::Object^ sender, System::EventArgs^ e);
};
}
