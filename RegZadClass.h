#pragma once
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
class RowRegZad;
class TableRegZad; 

    class RowRegZad
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
        void SetDate(string date)
        {
            this->date = date;
        }
        string GetDate()
        {
            return(date);
        }
        void SetCustomer(string customer)
        {
            this->customer = customer;
        }
        string GetCustomer()
        {
            return(customer);
        }
        void SetTask(string task)
        {
            this->task = task;
        }
        string GetTask()
        {
            return(task);
        }
        void SetProjNumber(int projNumber)
        {
            this->projNumber = projNumber;
        }
        int GetProjNumber()
        {
            return(projNumber);
        }
        void SetSurname(string surname)
        {
            this->surname = surname;
        }
        string GetSurname()
        {
            return(surname);
        }
        void SetStatus(string status)
        {
            this->status = status;
        }
        string GetStatus()
        {
            return(status);
        }
        void SetNote(string note)
        {
            this->note = note;
        }
        string GetNote()
        {
            return(note);
        }

    private:
        int taskNumber;
        string date;
        string customer;
        string task;
        int projNumber;
        string surname;
        string status;
        string note;
    };

    public class TableRegZad
    {
    public:
        /*void FillTable();
        void SaveToFile();
        void ExpTable();
        void ShowAddTask();
        void ShowEditTask();
        void ShowRequestTask();
        void ShowExpTable();
        int Request();
        void EditTable();*/
        void AddStr(RowRegZad tableRow)
        {
            if (rowsNum > 0) ArrResize();
            tableRows[rowsNum] = tableRow;
            rowsNum++;
        }
        void ArrResize()
        {
            RowRegZad* tableRow2 = new RowRegZad[rowsNum + 1];
            for (int i = 0; i < rowsNum; i++) tableRow2[i] = tableRows[i];
            tableRows = tableRow2;
        }
        int GetRowsNum()
        {
            return(rowsNum);
        }
    private:
        RowRegZad* tableRows = new RowRegZad[1];
        int rowsNum;
    };