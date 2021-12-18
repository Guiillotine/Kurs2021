#pragma once

namespace Kurs2021 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class PKDForm : public System::Windows::Forms::Form
	{
	public:
		PKDForm(void)
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
		~PKDForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openRegZadToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ открытьФайлToolStripMenuItem;




	private: System::Windows::Forms::ToolStripMenuItem^ редактироватьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ добавитьСтрокуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ изменитьСтрокуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ найтиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ экспортToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ журналУчетаНомеровПКДToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ журналУчетаВыполненнойПКДToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ журналРегистрацииЗаданийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_numb;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_fio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_napr;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_kurs;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_chas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_att;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonOpenPKD;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonOpenZad;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonAdd;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonCorrect;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonRequest;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PKDForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openRegZadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьФайлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->редактироватьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->добавитьСтрокуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->изменитьСтрокуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->найтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->экспортToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->журналУчетаНомеровПКДToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->журналУчетаВыполненнойПКДToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->журналРегистрацииЗаданийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_numb = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_fio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_napr = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_kurs = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_chas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_att = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButtonOpenPKD = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonOpenZad = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonAdd = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonCorrect = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonRequest = (gcnew System::Windows::Forms::ToolStripButton());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->файлToolStripMenuItem,
					this->редактироватьToolStripMenuItem, this->найтиToolStripMenuItem, this->экспортToolStripMenuItem, this->справкаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1109, 24);
			this->menuStrip1->TabIndex = 11;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->openRegZadToolStripMenuItem,
					this->открытьФайлToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(63, 20);
			this->файлToolStripMenuItem->Text = L"Журнал";
			// 
			// openRegZadToolStripMenuItem
			// 
			this->openRegZadToolStripMenuItem->Name = L"openRegZadToolStripMenuItem";
			this->openRegZadToolStripMenuItem->Size = System::Drawing::Size(336, 22);
			this->openRegZadToolStripMenuItem->Text = L"Регистрация задания на проектирование";
			this->openRegZadToolStripMenuItem->Click += gcnew System::EventHandler(this, &PKDForm::создатьФайлToolStripMenuItem_Click);
			// 
			// открытьФайлToolStripMenuItem
			// 
			this->открытьФайлToolStripMenuItem->Name = L"открытьФайлToolStripMenuItem";
			this->открытьФайлToolStripMenuItem->Size = System::Drawing::Size(336, 22);
			this->открытьФайлToolStripMenuItem->Text = L"Учет проектно-конструкторской документации";
			// 
			// редактироватьToolStripMenuItem
			// 
			this->редактироватьToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->добавитьСтрокуToolStripMenuItem,
					this->изменитьСтрокуToolStripMenuItem
			});
			this->редактироватьToolStripMenuItem->Name = L"редактироватьToolStripMenuItem";
			this->редактироватьToolStripMenuItem->Size = System::Drawing::Size(99, 20);
			this->редактироватьToolStripMenuItem->Text = L"Редактировать";
			// 
			// добавитьСтрокуToolStripMenuItem
			// 
			this->добавитьСтрокуToolStripMenuItem->Name = L"добавитьСтрокуToolStripMenuItem";
			this->добавитьСтрокуToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->добавитьСтрокуToolStripMenuItem->Text = L"Добавить строку";
			this->добавитьСтрокуToolStripMenuItem->Click += gcnew System::EventHandler(this, &PKDForm::добавитьСтрокуToolStripMenuItem_Click);
			// 
			// изменитьСтрокуToolStripMenuItem
			// 
			this->изменитьСтрокуToolStripMenuItem->Name = L"изменитьСтрокуToolStripMenuItem";
			this->изменитьСтрокуToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->изменитьСтрокуToolStripMenuItem->Text = L"Изменить строку";
			this->изменитьСтрокуToolStripMenuItem->Click += gcnew System::EventHandler(this, &PKDForm::изменитьСтрокуToolStripMenuItem_Click);
			// 
			// найтиToolStripMenuItem
			// 
			this->найтиToolStripMenuItem->Name = L"найтиToolStripMenuItem";
			this->найтиToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->найтиToolStripMenuItem->Text = L"Найти...";
			this->найтиToolStripMenuItem->Click += gcnew System::EventHandler(this, &PKDForm::найтиToolStripMenuItem_Click);
			// 
			// экспортToolStripMenuItem
			// 
			this->экспортToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->журналУчетаНомеровПКДToolStripMenuItem,
					this->журналУчетаВыполненнойПКДToolStripMenuItem, this->журналРегистрацииЗаданийToolStripMenuItem
			});
			this->экспортToolStripMenuItem->Name = L"экспортToolStripMenuItem";
			this->экспортToolStripMenuItem->Size = System::Drawing::Size(64, 20);
			this->экспортToolStripMenuItem->Text = L"Экспорт";
			// 
			// журналУчетаНомеровПКДToolStripMenuItem
			// 
			this->журналУчетаНомеровПКДToolStripMenuItem->Name = L"журналУчетаНомеровПКДToolStripMenuItem";
			this->журналУчетаНомеровПКДToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->журналУчетаНомеровПКДToolStripMenuItem->Text = L"Журнал учета номеров ПКД";
			this->журналУчетаНомеровПКДToolStripMenuItem->Click += gcnew System::EventHandler(this, &PKDForm::журналУчетаНомеровПКДToolStripMenuItem_Click);
			// 
			// журналУчетаВыполненнойПКДToolStripMenuItem
			// 
			this->журналУчетаВыполненнойПКДToolStripMenuItem->Name = L"журналУчетаВыполненнойПКДToolStripMenuItem";
			this->журналУчетаВыполненнойПКДToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->журналУчетаВыполненнойПКДToolStripMenuItem->Text = L"Журнал учета выполненной ПКД";
			this->журналУчетаВыполненнойПКДToolStripMenuItem->Click += gcnew System::EventHandler(this, &PKDForm::журналУчетаВыполненнойПКДToolStripMenuItem_Click);
			// 
			// журналРегистрацииЗаданийToolStripMenuItem
			// 
			this->журналРегистрацииЗаданийToolStripMenuItem->Name = L"журналРегистрацииЗаданийToolStripMenuItem";
			this->журналРегистрацииЗаданийToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->журналРегистрацииЗаданийToolStripMenuItem->Text = L"Журнал регистрации заданий ";
			this->журналРегистрацииЗаданийToolStripMenuItem->Click += gcnew System::EventHandler(this, &PKDForm::журналРегистрацииЗаданийToolStripMenuItem_Click);
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->справкаToolStripMenuItem->Text = L"Справка";
			this->справкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &PKDForm::справкаToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(28, -135);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(367, 20);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Учет проектно-конструкторской документации";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(375, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(367, 20);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Учет проектно-конструкторской документации";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Black;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::ColumnHeader;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Honeydew;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column1,
					this->Column_numb, this->Column_name, this->Column_fio, this->Column_napr, this->Column_kurs, this->Column_chas, this->Column_att
			});
			this->dataGridView1->Location = System::Drawing::Point(129, 95);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView1->Size = System::Drawing::Size(849, 578);
			this->dataGridView1->TabIndex = 13;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"№";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 43;
			// 
			// Column_numb
			// 
			this->Column_numb->HeaderText = L"Номер задания";
			this->Column_numb->Name = L"Column_numb";
			this->Column_numb->ReadOnly = true;
			this->Column_numb->Width = 102;
			// 
			// Column_name
			// 
			this->Column_name->HeaderText = L"Дата регистрации";
			this->Column_name->Name = L"Column_name";
			this->Column_name->ReadOnly = true;
			this->Column_name->Width = 114;
			// 
			// Column_fio
			// 
			this->Column_fio->HeaderText = L"Шифр проекта";
			this->Column_fio->Name = L"Column_fio";
			this->Column_fio->ReadOnly = true;
			this->Column_fio->Width = 96;
			// 
			// Column_napr
			// 
			this->Column_napr->HeaderText = L"Наименование проекта";
			this->Column_napr->Name = L"Column_napr";
			this->Column_napr->ReadOnly = true;
			this->Column_napr->Width = 139;
			// 
			// Column_kurs
			// 
			this->Column_kurs->HeaderText = L"Исполнитель";
			this->Column_kurs->Name = L"Column_kurs";
			this->Column_kurs->ReadOnly = true;
			this->Column_kurs->Width = 99;
			// 
			// Column_chas
			// 
			this->Column_chas->HeaderText = L"Дата завершения проекта";
			this->Column_chas->Name = L"Column_chas";
			this->Column_chas->ReadOnly = true;
			this->Column_chas->Width = 152;
			// 
			// Column_att
			// 
			this->Column_att->HeaderText = L"Объем проекта";
			this->Column_att->Name = L"Column_att";
			this->Column_att->ReadOnly = true;
			this->Column_att->Width = 102;
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripButtonOpenPKD,
					this->toolStripButtonOpenZad, this->toolStripButtonAdd, this->toolStripButtonCorrect, this->toolStripButtonRequest
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1109, 25);
			this->toolStrip1->TabIndex = 16;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButtonOpenPKD
			// 
			this->toolStripButtonOpenPKD->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonOpenPKD->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonOpenPKD.Image")));
			this->toolStripButtonOpenPKD->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonOpenPKD->Name = L"toolStripButtonOpenPKD";
			this->toolStripButtonOpenPKD->Size = System::Drawing::Size(23, 22);
			this->toolStripButtonOpenPKD->Text = L"Создать файл";
			this->toolStripButtonOpenPKD->Click += gcnew System::EventHandler(this, &PKDForm::журналРегистрацииЗаданийToolStripMenuItem_Click);
			// 
			// toolStripButtonOpenZad
			// 
			this->toolStripButtonOpenZad->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonOpenZad->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonOpenZad.Image")));
			this->toolStripButtonOpenZad->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonOpenZad->Name = L"toolStripButtonOpenZad";
			this->toolStripButtonOpenZad->Size = System::Drawing::Size(23, 22);
			this->toolStripButtonOpenZad->Text = L"Открыть файл";
			// 
			// toolStripButtonAdd
			// 
			this->toolStripButtonAdd->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonAdd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonAdd.Image")));
			this->toolStripButtonAdd->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonAdd->Name = L"toolStripButtonAdd";
			this->toolStripButtonAdd->Size = System::Drawing::Size(23, 22);
			this->toolStripButtonAdd->Text = L"Добавить строку";
			// 
			// toolStripButtonCorrect
			// 
			this->toolStripButtonCorrect->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonCorrect->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonCorrect.Image")));
			this->toolStripButtonCorrect->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonCorrect->Name = L"toolStripButtonCorrect";
			this->toolStripButtonCorrect->Size = System::Drawing::Size(23, 22);
			this->toolStripButtonCorrect->Text = L"Изменить строку";
			// 
			// toolStripButtonRequest
			// 
			this->toolStripButtonRequest->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonRequest->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonRequest.Image")));
			this->toolStripButtonRequest->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonRequest->Name = L"toolStripButtonRequest";
			this->toolStripButtonRequest->Size = System::Drawing::Size(23, 22);
			this->toolStripButtonRequest->Text = L"Найти";
			// 
			// PKDForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1109, 703);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->Name = L"PKDForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &PKDForm::PKDForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &PKDForm::PKDForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PKDForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void создатьФайлToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void журналУчетаНомеровПКДToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void журналУчетаВыполненнойПКДToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void журналРегистрацииЗаданийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void добавитьСтрокуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void изменитьСтрокуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void найтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void PKDForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
	private: System::Void справкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void PKDForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
};
}
