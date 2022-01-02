#pragma once
#include <iostream>
#include <stdio.h>
#include <string>

#include "PKDClass.h"
#include <msclr\marshal_cppstd.h>
#include "Exp1.h"
extern TablePKD tablePKD;
extern string fnamePKD;

System::Void Kurs2021::Exp1::Exp1_Load(System::Object^ sender, System::EventArgs^ e)
{
    /*if (tablePKD.GetRowsNum() == 0)
        if (tablePKD.Getfile(fnamePKD) == 0)
        {
            MessageBox::Show("Не удалось открыть файл с таблицей учета ПКД", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
            Exp1::Close();
        }*/
    if (tablePKD.GetRowsNum() != 0) this->from->Text = L"1"; else this->from->Text = L"0";
    this->to->Text = tablePKD.GetRowsNum().ToString();
    return System::Void();
}
System::Void Kurs2021::Exp1::buttonBack_Click(System::Object^ sender, System::EventArgs^ e)
{
    Exp1::Close();
    return System::Void();
}
System::Void Kurs2021::Exp1::buttonOk_Click(System::Object^ sender, System::EventArgs^ e)
{
    int f = 1;
    int from = 0, to = 0;
    if (this->from->Text == "") { MessageBox::Show("Поле оставлено пустым", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); f = 0; }
    else if ((Convert::ToInt32(this->from->Text) > tablePKD.GetRowsNum()) || (Convert::ToInt32(this->from->Text) == 0)) { if (f) { MessageBox::Show("Строки с данным номером не существует", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); f = 0; } }

    if (this->to->Text == "") { if (f) { MessageBox::Show("Поле оставлено пустым", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); f = 0; } }
    else if ((Convert::ToInt32(this->to->Text) > tablePKD.GetRowsNum()) || (Convert::ToInt32(this->to->Text) == 0)) { if (f) { MessageBox::Show("Строки с данным номером не существует", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); f = 0; } }
    else if (Convert::ToInt32(this->to->Text) < Convert::ToInt32(this->from->Text)) { if (f) { MessageBox::Show("Границы диапазона экспортируемых строк указаны некорректно", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); f = 0; } }
 
    using namespace System::Runtime::InteropServices;
    msclr::interop::marshal_context context;  
    if ((this->fileName->Text == "") && f) { MessageBox::Show("Введите название файла", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); f = 0; }

    if (f)
    {
        from = Convert::ToInt32(this->from->Text);
        to = Convert::ToInt32(this->to->Text);
        std::string fileName = context.marshal_as<std::string>(this->fileName->Text);
        if (tablePKD.ExpSmallTable(fileName, from, to) == 0) MessageBox::Show("Не удалось открыть файл помещения в него экспортируемой таблицы", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        else
        {
            MessageBox::Show("Таблица экспортирована в файл \"" + this->fileName->Text + "\"", "", MessageBoxButtons::OK, MessageBoxIcon::None);
            this->fileName->Text = L"";
        }
    }
}
System::Void Kurs2021::Exp1::fileName_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
    if (e->KeyCode == Keys::Enter)
    {
        e->SuppressKeyPress = true;
        buttonOk_Click(sender, e);
    }
}
