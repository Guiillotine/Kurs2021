#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>
#include "TableClass.h"

using namespace std;
class RowPKD;
class TablePKD;
extern string fnamePKD;

    class RowPKD : public Row
    {
    public:
        RowPKD()
        {
        }
        RowPKD(const RowPKD& row)
        {
            this->taskNumber = row.taskNumber;
            this->dateReg = row.dateReg;
            this->cipher = row.cipher;
            this->projName = row.projName;
            this->surname = row.surname;
            this->dateEnd = row.dateEnd;
            this->volume = row.volume;
        }
        /*void SetTaskNumber(string taskNumber)
        {
            this->taskNumber = taskNumber;
        }
        string GetTaskNumber()
        {
            return(taskNumber);
        }*/
        void SetDateReg(string dateReg)
        {
            this->dateReg = dateReg;
        }
        string GetDateReg()
        {
            return(dateReg);
        }
        void SetCipher(string cipher)
        {
            this->cipher = cipher;
        }
        string GetCipher()
        {
            return(cipher);
        }
        void SetProjName(string projName)
        {
            this->projName = projName;
        }
        string GetProjName()
        {
            return(projName);
        }
       /*void SetSurname(string surname)
        {
            this->surname = surname;
        }
        string GetSurname()
        {
            return(surname);
        }*/
        void SetDateEnd(string dateEnd)
        {
            this->dateEnd = dateEnd;
        }
        string GetDateEnd()
        {
            return(dateEnd);
        }
        void SetVolume(int volume)
        {
            this->volume = volume;
        }
        int GetVolume()
        {
            return(volume);
        }
        int Putfile(string fnamePKD)
        {
            fstream f;
            f.open(fnamePKD, fstream::in | fstream::app);
            if (!f.is_open()) return 0;
            else f << taskNumber << '\n' << dateReg << '\n' << cipher << '\n' << projName << '\n' << surname << '\n' << dateEnd << '\n' << volume << '\n';
            f.close();
            return (1);
        }
    private:
        //string taskNumber;
        string dateReg;
        string cipher;
        string projName;
        //string surname;
        string dateEnd;
        int volume;
    };

    public class TablePKD : public Table
    {
    public:
        /*TablePKD()
        {
            rowsNum = 0;
        }*/
        void AddStr(RowPKD tableRow)
        {
            if (rowsNum > 0) ArrResize();
            tableRows[rowsNum] = tableRow;
            rowsNum++;
        }
        void EditStr(int numberStr, RowPKD tableRow)
        {
            tableRows[numberStr - 1] = tableRow;
        }
        void ArrResize()
        {
            RowPKD* tableRows2 = new RowPKD[rowsNum + 1];
            for (int i = 0; i < rowsNum; i++) tableRows2[i] = tableRows[i];
            tableRows = tableRows2;
        }
        int GetRowsNum()
        {
            return(rowsNum);
        }
        RowPKD GetTableRow(int index)
        {
            return *(tableRows + (index));
        }
        int Putfile(string fnamePKD)
        {
            ofstream f;
            f.open(fnamePKD);
            if (!f.is_open()) return 0;
            for (int i = 0; i < GetRowsNum(); i++)
            f << tableRows[i].GetTaskNumber() << '\n' << tableRows[i].GetDateReg() << '\n' << tableRows[i].GetCipher() << '\n' << tableRows[i].GetProjName() << '\n' << tableRows[i].GetSurname() << '\n' << tableRows[i].GetDateEnd() << '\n' << tableRows[i].GetVolume() << '\n';
            f.close();
            return (1);
        }
        int Getfile(string fnamePKD)
        {
            fstream f;
            string str;
            f.open(fnamePKD, fstream::in | fstream::out | fstream::app);
            if (!f.is_open()) return 0;
            int i = 0;    
            RowPKD row;
            while (!f.eof())
            {
                getline(f, str);
                switch (i)
                {
                case 0: row.SetTaskNumber(str); break;
                case 1: row.SetDateReg(str); break;
                case 2: row.SetCipher(str); break;
                case 3: row.SetProjName(str); break;
                case 4: row.SetSurname(str); break;
                case 5: row.SetDateEnd(str); break;
                case 6: row.SetVolume(stoi(str)); AddStr(row);
                }
                i++;
                if (i == 7) i = 0;
            }
            f.close();
            return 1;
        }
        int ExpBigTable(string fname, int from, int to)
        {
            ofstream f;
            f.open(fname);
            if (!f.is_open()) return 0;
            f << "                                  ÆÓÐÍÀË Ó×ÅÒÀ ÂÛÏÎËÍÅÍÍÎÉ ÏÐÎÅÊÒÍÎ-ÊÎÍÑÒÐÓÊÒÎÐÑÊÎÉ ÄÎÊÓÌÅÍÒÀÖÈÈ\n\n";
            f << "  ÍÎÌÅÐ       ÄÀÒÀ      ØÈÔÐ                    ÍÀÈÌÅÍÎÂÀÍÈÅ ÏÐÎÅÊÒÀ                     ÈÑÏÎËÍÈÒÅËÜ      ÄÀÒÀ ÇÀÂÅÐØÅÍÈß ÎÁÚÅÌ\n";
            f << " ÇÀÄÀÍÈß  ÐÅÃÈÑÒÐÀÖÈÈ  ÏÐÎÅÊÒÀ                                                                                ÏÐÎÅÊÒÀ   (â  ë.À4)\n";
            for (int i = from - 1; i < to; i++)
            {
                if ((tableRows[i].GetVolume() == 0) || (tableRows[i].GetDateEnd() == "00.00.0000")) continue;
                f << "| ";
                f << tableRows[i].GetTaskNumber();
                for (int j = tableRows[i].GetTaskNumber().length(); j < 6; j++) f << ' ';
                f << "| ";
                f << tableRows[i].GetDateReg();
                for (int j = tableRows[i].GetDateReg().length(); j < 11; j++) f << ' ';
                f << "| ";
                f << tableRows[i].GetCipher();
                for (int j = tableRows[i].GetCipher().length(); j < 7; j++) f << ' ';
                f << "| ";
                f << tableRows[i].GetProjName();
                for (int j = tableRows[i].GetProjName().length(); j < 51; j++) f << ' ';
                f << "| ";
                f << tableRows[i].GetSurname();
                for (int j = tableRows[i].GetSurname().length(); j < 21; j++) f << ' ';
                f << "| ";
                f << tableRows[i].GetDateEnd();
                for (int j = tableRows[i].GetDateEnd().length(); j < 12; j++) f << ' ';
                f << "| ";
                f << tableRows[i].GetVolume();
                for (int j = to_string(tableRows[i].GetVolume()).length(); j < 6; j++) f << ' ';
                f << "|\n";
            }
            f.close();
            return (1);
        }
        int ExpSmallTable(string fname, int from, int to)
        {
            ofstream f;
            f.open(fname);
            if (!f.is_open()) return 0;
            f << "                         ÆÓÐÍÀË Ó×ÅÒÀ ÍÎÌÅÐÎÂ ÏÐÎÅÊÒÍÎ-ÊÎÍÑÒÐÓÊÒÎÐÑÊÎÉ ÄÎÊÓÌÅÍÒÀÖÈÈ\n\n";
            f << "  ÍÎÌÅÐ       ÄÀÒÀ      ØÈÔÐ                    ÍÀÈÌÅÍÎÂÀÍÈÅ ÏÐÎÅÊÒÀ                     ÈÑÏÎËÍÈÒÅËÜ\n";
            f << " ÇÀÄÀÍÈß  ÐÅÃÈÑÒÐÀÖÈÈ  ÏÐÎÅÊÒÀ\n";
            for (int i = from - 1; i < to; i++)
            {
                f << "| ";
                f << tableRows[i].GetTaskNumber();
                for (int j = tableRows[i].GetTaskNumber().length(); j < 6; j++) f << ' ';
                f << "| ";
                f << tableRows[i].GetDateReg();
                for (int j = tableRows[i].GetDateReg().length(); j < 11; j++) f << ' ';
                f << "| ";
                f << tableRows[i].GetCipher();
                for (int j = tableRows[i].GetCipher().length(); j < 7; j++) f << ' ';
                f << "| ";
                f << tableRows[i].GetProjName();
                for (int j = tableRows[i].GetProjName().length(); j < 51; j++) f << ' ';
                f << "| ";
                f << tableRows[i].GetSurname();
                for (int j = tableRows[i].GetSurname().length(); j < 21; j++) f << ' ';
                f << "|\n";
            }
            f.close();
            return (1);
        }
    private: 
        RowPKD* tableRows = new RowPKD[1];
        //int rowsNum;
    };