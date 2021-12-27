#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include <Windows.h>

#include "RegZdClass.h"
#include <msclr\marshal_cppstd.h>
#include "Exp3.h"
extern TableRegZd tableRegZd;
extern string fnameRegZd;

System::Void Kurs2021::Exp3::Exp3_Load(System::Object^ sender, System::EventArgs^ e)
{
    if (tableRegZd.GetRowsNum() == 0) 
        if (tableRegZd.Getfile(fnameRegZd) == 0) 
        {
            MessageBox::Show("Не удалось открыть файл с таблицей регистрации заданий для экспорта", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); 
            Exp3::Close();
        }
    if (tableRegZd.GetRowsNum() != 0) this->from->Text = L"1"; else this->from->Text = L"0";
    this->to->Text = tableRegZd.GetRowsNum().ToString();
    return System::Void();
}
System::Void Kurs2021::Exp3::buttonBack_Click(System::Object^ sender, System::EventArgs^ e)
{
    Exp3::Close();
    return System::Void();
}
System::Void Kurs2021::Exp3::buttonOk_Click(System::Object^ sender, System::EventArgs^ e)
{
    int f = 1;
    int from = 0, to = 0;
    if (this->from->Text == "") { MessageBox::Show("Поле оставлено пустым", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); f = 0; }
    else if (((Convert::ToInt32(this->from->Text) > tableRegZd.GetRowsNum()) || (Convert::ToInt32(this->from->Text) == 0)) && f) { MessageBox::Show("Строки с данным номером не существует", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); f = 0;}
    else from = Convert::ToInt32(this->from->Text);
    
    if ((this->to->Text == "") && f){ MessageBox::Show("Поле оставлено пустым", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); f = 0; }
    else if (((Convert::ToInt32(this->to->Text) > tableRegZd.GetRowsNum()) || (Convert::ToInt32(this->to->Text) == 0)) && f) { MessageBox::Show("Строки с данным номером не существует", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); f = 0;}
    else if (Convert::ToInt32(this->to->Text) < from) { MessageBox::Show("Границы диапазона экспортируемых строк указаны некорректно", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); f = 0; }
    else to = Convert::ToInt32(this->to->Text);

    using namespace System::Runtime::InteropServices;
    msclr::interop::marshal_context context;
    std::string fileName = context.marshal_as<std::string>(this->fileName->Text);
    if ((this->fileName->Text == "") && f) { MessageBox::Show("Введите название файла", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning); f = 0; }

    if (f)
    {
        if (tableRegZd.ExpTable(fileName, from, to) == 0) MessageBox::Show("Не удалось открыть файл помещения в него экспортируемой таблицы", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        else
        {
            MessageBox::Show("Таблица экспортирована в файл \"" + this->fileName->Text + "\"", "", MessageBoxButtons::OK, MessageBoxIcon::None);
            this->from->Text = L"";
            this->to->Text = L"";
            this->fileName->Text = L"";
        }
    }
}
