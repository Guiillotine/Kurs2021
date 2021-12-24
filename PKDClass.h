#pragma once
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
class RowPKD;
class TablePKD;

    class RowPKD
    {
    public:
        //void InputStr();
        void SetTaskNumber(int taskNumber)
        {
            this->taskNumber = taskNumber;
        }
        int GetTaskNumber()
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
    private:
        int taskNumber;
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
    private: 
        RowPKD* tableRows = new RowPKD[1];
        int rowsNum;
    };