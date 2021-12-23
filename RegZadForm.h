#pragma once

namespace Kurs2021 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class RegZadForm : public System::Windows::Forms::Form
	{
	public:
		RegZadForm(void)
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
		~RegZadForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonOpenPKD;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonOpenZad;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonAdd;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonCorrect;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonRequest;
	protected:





	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openRegZadToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ openPKDToolStripMenuItem;





	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_numb;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_fio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_napr;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_kurs;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_chas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_att;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_prim;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegZadForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButtonOpenPKD = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonOpenZad = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonAdd = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonCorrect = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonRequest = (gcnew System::Windows::Forms::ToolStripButton());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openRegZadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openPKDToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column_prim = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_att = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_chas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_kurs = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_napr = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_fio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_numb = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->toolStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripButtonOpenPKD,
					this->toolStripButtonOpenZad, this->toolStripButtonAdd, this->toolStripButtonCorrect, this->toolStripButtonRequest
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1439, 25);
			this->toolStrip1->TabIndex = 13;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButtonOpenPKD
			// 
			this->toolStripButtonOpenPKD->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonOpenPKD->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonOpenPKD.Image")));
			this->toolStripButtonOpenPKD->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonOpenPKD->Name = L"toolStripButtonOpenPKD";
			this->toolStripButtonOpenPKD->Size = System::Drawing::Size(23, 22);
			this->toolStripButtonOpenPKD->Text = L"����������� ������� �� ��������������";
			// 
			// toolStripButtonOpenZad
			// 
			this->toolStripButtonOpenZad->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonOpenZad->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonOpenZad.Image")));
			this->toolStripButtonOpenZad->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonOpenZad->Name = L"toolStripButtonOpenZad";
			this->toolStripButtonOpenZad->Size = System::Drawing::Size(23, 22);
			this->toolStripButtonOpenZad->Text = L"���� ���";
			this->toolStripButtonOpenZad->Click += gcnew System::EventHandler(this, &RegZadForm::openPKDToolStripMenuItem_Click);
			// 
			// toolStripButtonAdd
			// 
			this->toolStripButtonAdd->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonAdd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonAdd.Image")));
			this->toolStripButtonAdd->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonAdd->Name = L"toolStripButtonAdd";
			this->toolStripButtonAdd->Size = System::Drawing::Size(23, 22);
			this->toolStripButtonAdd->Text = L"�������� ������";
			this->toolStripButtonAdd->Click += gcnew System::EventHandler(this, &RegZadForm::��������������ToolStripMenuItem_Click);
			// 
			// toolStripButtonCorrect
			// 
			this->toolStripButtonCorrect->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonCorrect->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonCorrect.Image")));
			this->toolStripButtonCorrect->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonCorrect->Name = L"toolStripButtonCorrect";
			this->toolStripButtonCorrect->Size = System::Drawing::Size(23, 22);
			this->toolStripButtonCorrect->Text = L"�������� ������";
			this->toolStripButtonCorrect->Click += gcnew System::EventHandler(this, &RegZadForm::��������������ToolStripMenuItem_Click);
			// 
			// toolStripButtonRequest
			// 
			this->toolStripButtonRequest->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonRequest->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonRequest.Image")));
			this->toolStripButtonRequest->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonRequest->Name = L"toolStripButtonRequest";
			this->toolStripButtonRequest->Size = System::Drawing::Size(23, 22);
			this->toolStripButtonRequest->Text = L"�����";
			this->toolStripButtonRequest->Click += gcnew System::EventHandler(this, &RegZadForm::�����ToolStripMenuItem_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->����ToolStripMenuItem,
					this->�������������ToolStripMenuItem, this->�����ToolStripMenuItem, this->�������ToolStripMenuItem, this->�������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1439, 24);
			this->menuStrip1->TabIndex = 11;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->openRegZadToolStripMenuItem,
					this->openPKDToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(63, 20);
			this->����ToolStripMenuItem->Text = L"������";
			// 
			// openRegZadToolStripMenuItem
			// 
			this->openRegZadToolStripMenuItem->Name = L"openRegZadToolStripMenuItem";
			this->openRegZadToolStripMenuItem->Size = System::Drawing::Size(336, 22);
			this->openRegZadToolStripMenuItem->Text = L"����������� ������� �� ��������������";
			// 
			// openPKDToolStripMenuItem
			// 
			this->openPKDToolStripMenuItem->Name = L"openPKDToolStripMenuItem";
			this->openPKDToolStripMenuItem->Size = System::Drawing::Size(336, 22);
			this->openPKDToolStripMenuItem->Text = L"���� ��������-��������������� ������������";
			this->openPKDToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegZadForm::openPKDToolStripMenuItem_Click);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->��������������ToolStripMenuItem,
					this->��������������ToolStripMenuItem
			});
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(99, 20);
			this->�������������ToolStripMenuItem->Text = L"�������������";
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��������������ToolStripMenuItem.Image")));
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->��������������ToolStripMenuItem->Text = L"�������� ������";
			this->��������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegZadForm::��������������ToolStripMenuItem_Click);
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��������������ToolStripMenuItem.Image")));
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->��������������ToolStripMenuItem->Text = L"�������� ������";
			this->��������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegZadForm::��������������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->�����ToolStripMenuItem->Text = L"�����...";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegZadForm::�����ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->���������������������ToolStripMenuItem,
					this->�������������������������ToolStripMenuItem, this->������������������������ToolStripMenuItem
			});
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(64, 20);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// ���������������������ToolStripMenuItem
			// 
			this->���������������������ToolStripMenuItem->Name = L"���������������������ToolStripMenuItem";
			this->���������������������ToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->���������������������ToolStripMenuItem->Text = L"������ ����� ������� ���";
			this->���������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegZadForm::���������������������ToolStripMenuItem_Click);
			// 
			// �������������������������ToolStripMenuItem
			// 
			this->�������������������������ToolStripMenuItem->Name = L"�������������������������ToolStripMenuItem";
			this->�������������������������ToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->�������������������������ToolStripMenuItem->Text = L"������ ����� ����������� ���";
			this->�������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegZadForm::�������������������������ToolStripMenuItem_Click);
			// 
			// ������������������������ToolStripMenuItem
			// 
			this->������������������������ToolStripMenuItem->Name = L"������������������������ToolStripMenuItem";
			this->������������������������ToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->������������������������ToolStripMenuItem->Text = L"������ ����������� ������� ";
			this->������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegZadForm::������������������������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegZadForm::�������ToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(523, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(387, 24);
			this->label1->TabIndex = 12;
			this->label1->Text = L"����������� ������� �� ��������������";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::Black;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::ColumnHeader;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Honeydew;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column1,
					this->Column_numb, this->Column_name, this->Column_fio, this->Column_napr, this->Column_kurs, this->Column_chas, this->Column_att,
					this->Column_prim
			});
			this->dataGridView1->Location = System::Drawing::Point(52, 108);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView1->Size = System::Drawing::Size(1333, 686);
			this->dataGridView1->TabIndex = 10;
			// 
			// Column_prim
			// 
			this->Column_prim->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column_prim->HeaderText = L"                        ����������";
			this->Column_prim->Name = L"Column_prim";
			this->Column_prim->ReadOnly = true;
			this->Column_prim->Width = 216;
			// 
			// Column_att
			// 
			this->Column_att->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column_att->HeaderText = L"         ������";
			this->Column_att->Name = L"Column_att";
			this->Column_att->ReadOnly = true;
			// 
			// Column_chas
			// 
			this->Column_chas->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column_chas->HeaderText = L"                    �������                         ��������-������������";
			this->Column_chas->Name = L"Column_chas";
			this->Column_chas->ReadOnly = true;
			this->Column_chas->Width = 187;
			// 
			// Column_kurs
			// 
			this->Column_kurs->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column_kurs->HeaderText = L"         �����           �������";
			this->Column_kurs->Name = L"Column_kurs";
			this->Column_kurs->ReadOnly = true;
			this->Column_kurs->Width = 101;
			// 
			// Column_napr
			// 
			this->Column_napr->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column_napr->HeaderText = L"                             ���������� �������";
			this->Column_napr->Name = L"Column_napr";
			this->Column_napr->ReadOnly = true;
			this->Column_napr->Width = 300;
			// 
			// Column_fio
			// 
			this->Column_fio->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column_fio->Frozen = true;
			this->Column_fio->HeaderText = L"           ������������                   ���������";
			this->Column_fio->Name = L"Column_fio";
			this->Column_fio->ReadOnly = true;
			this->Column_fio->Width = 150;
			// 
			// Column_name
			// 
			this->Column_name->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column_name->Frozen = true;
			this->Column_name->HeaderText = L"         ���� ������               �������";
			this->Column_name->Name = L"Column_name";
			this->Column_name->ReadOnly = true;
			this->Column_name->Width = 131;
			// 
			// Column_numb
			// 
			this->Column_numb->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column_numb->Frozen = true;
			this->Column_numb->HeaderText = L"         �����            �������";
			this->Column_numb->Name = L"Column_numb";
			this->Column_numb->ReadOnly = true;
			this->Column_numb->Width = 102;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column1->Frozen = true;
			this->Column1->HeaderText = L"�";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 43;
			// 
			// RegZadForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1439, 837);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->MaximizeBox = false;
			this->Name = L"RegZadForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"���� ���";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &RegZadForm::RegZadForm_FormClosed);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout(); 

		}
#pragma endregion
	private: System::Void openPKDToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ���������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void �������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void RegZadForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e); 
};
}
