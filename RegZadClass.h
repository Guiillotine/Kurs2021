#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>

using namespace std;
class RowRegZad;
class TableRegZad; 
extern string fnameRegZad;

    class RowRegZad
    {
    public:
        RowRegZad()
        {
        }
        RowRegZad(const RowRegZad& row)
        {
            this->taskNumber = row.taskNumber;
            this->date = row.date;
            this->customer = row.customer;
            this->task = row.task;
            this->projNumber = row.projNumber;
            this->surname = row.surname;
            this->status = row.status;
            this->note = row.note;
        }
        void SetTaskNumber(string taskNumber)
        {
            this->taskNumber = taskNumber;
        }
        string GetTaskNumber()//int GetTaskNumber()
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
        void SetProjNumber(string projNumber)
        {
            this->projNumber = projNumber;
        }
        string GetProjNumber()
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
        int Putfile()
        {
            fstream f;
            f.open(fnameRegZad, fstream::in | fstream::app);
            if (!f.is_open()) return 0;
            else f << taskNumber << '_' << date << '_' << customer << '_' << task << '_' << projNumber << '_' << surname << '_' << status << '_' << note << '\n';
            f.close();
            return (1);
        }

    private:
        string taskNumber;//int taskNumber;
        string date;
        string customer;
        string task;
        string projNumber;//int projNumber;
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
        RowRegZad GetTableRow(int index)
        {
            return *(tableRows + (index));
        }
    private:
        RowRegZad* tableRows = new RowRegZad[1];
        int rowsNum;
    };