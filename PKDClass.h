#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>

using namespace std;
class RowPKD;
class TablePKD;
extern string fnamePKD;

    class RowPKD
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
        void SetTaskNumber(string taskNumber)
        {
            this->taskNumber = taskNumber;
        }
        string GetTaskNumber()
        {
            return(taskNumber);
        }
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
        void SetSurname(string surname)
        {
            this->surname = surname;
        }
        string GetSurname()
        {
            return(surname);
        }
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
        int Putfile()
        {
            fstream f;
            f.open(fnamePKD, fstream::in | fstream::app);
            if (!f.is_open()) return 0;
            else f << taskNumber << '\n' << dateReg << '\n' << cipher << '\n' << projName << '\n' << surname << '\n' << dateEnd << '\n' << volume << '\n';
            f.close();
            return (1);
        }
    private:
        string taskNumber;
        string dateReg;
        string cipher;
        string projName;
        string surname;
        string dateEnd;
        int volume;
    };

    public class TablePKD
    {
    public:
        /*void FillTable();
        void SaveToFile();
        void ExpTable();
        void ShowAddPKD();
        void ShowEditPKD();
        void ShowRequestPKD();
        void ShowExpTable();
        int Request();
        void EditTable();*/
        TablePKD()
        {
            rowsNum = 0;
        }
        void AddStr(RowPKD tableRow)
        {
            if (rowsNum > 0) ArrResize();
            tableRows[rowsNum] = tableRow;
            rowsNum++;
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
        int Getfile()
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
    private: 
        RowPKD* tableRows = new RowPKD[1];
        int rowsNum;
    };