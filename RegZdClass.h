#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>
#include "TableClass.h"

using namespace std;
class RowRegZd;
class TableRegZd;
extern string fnameRegZd;

class RowRegZd : public Row
{
public:
    RowRegZd()
    {
    }
    RowRegZd(const RowRegZd& row)
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
    int Putfile(string fnameRegZd)
    {
        fstream f;
        f.open(fnameRegZd, fstream::in | fstream::app);
        if (!f.is_open()) return 0;
        else f << taskNumber << '\n' << date << '\n' << customer << '\n' << task << '\n' << projNumber << '\n' << surname << '\n' << status << '\n' << note << '\n';
        f.close();
        return (1);
    }

private:
    string date;
    string customer;
    string task;
    string projNumber;
    string status;
    string note;
};

public class TableRegZd : public Table
{
public:   
    ~TableRegZd()
    {
        delete[] tableRows;
    }
    void AddStr(RowRegZd tableRow)
    {
        if (rowsNum > 0) ArrResize();
        tableRows[rowsNum] = tableRow;
        rowsNum++;
    }
    void EditStr(int numberStr, RowRegZd tableRow)
    {
        tableRows[numberStr - 1] = tableRow;
    }
    void ArrResize()
    {
        RowRegZd* tableRow2 = new RowRegZd[rowsNum + 1];
        for (int i = 0; i < rowsNum; i++) tableRow2[i] = tableRows[i];
        tableRows = tableRow2;
    }
    /*int GetRowsNum()
    {
        return(rowsNum);
    }*/
    RowRegZd GetTableRow(int index)
    {
        return *(tableRows + (index));
    }
    int Putfile(string fnameRegZd)
    {
        ofstream f;
        f.open(fnameRegZd);
        if (!f.is_open()) return 0;
        for (int i = 0; i < GetRowsNum(); i++)
            f << tableRows[i].GetTaskNumber() << '\n' << tableRows[i].GetDate() << '\n' << tableRows[i].GetCustomer() << '\n' << tableRows[i].GetTask() << '\n' << tableRows[i].GetProjNumber() << '\n' << tableRows[i].GetSurname() << '\n' << tableRows[i].GetStatus() << '\n' << tableRows[i].GetNote() << '\n';
        f.close();
        return (1);
    }
    int Getfile(string fnameRegZd)
    {
        fstream f;
        string str;
        f.open(fnameRegZd, fstream::in | fstream::out | fstream::app);
        if (!f.is_open()) return 0;
        int i = 0;
        RowRegZd row;
        while (!f.eof())
        {
            getline(f, str);
            switch (i)
            {
            case 0: row.SetTaskNumber(str); break;
            case 1: row.SetDate(str); break;
            case 2: row.SetCustomer(str); break;
            case 3: row.SetTask(str); break;
            case 4: row.SetProjNumber(str); break;
            case 5: row.SetSurname(str); break;
            case 6: row.SetStatus(str); break;
            case 7: row.SetNote(str); AddStr(row);
            }
            i++;
            if (i == 8) i = 0;
        }
        f.close();
        return 1;
    }
    int ExpTable(string fname, int from, int to)
    {
        ofstream f;
        f.open(fname);
        if (!f.is_open()) return 0;
        f << "                                                                                          ÆÓÐÍÀË ÐÅÃÈÑÒÐÀÖÈÈ ÇÀÄÀÍÈÉ ÍÀ ÏÐÎÅÊÒÈÐÎÂÀÍÈÅ\n\n";
        f << "  ÍÎÌÅÐ      ÄÀÒÀ ÂÛÄ.     ÍÀÈÌÅÍÎÂÀÍÈÅ                                             ÑÎÄÅÐÆÀÍÈÅ ÇÀÄÀÍÈß                                            ÍÎÌÅÐ          ÔÀÌÈËÈß              ÑÒÀÒÓÑ                    ÏÐÈÌÅ×ÀÍÈÅ\n";
        f << " ÇÀÄÀÍÈß     ÇÀÄÀÍÈß        ÇÀÊÀÇ×ÈÊÀ                                                                                                            ÏÐÎÅÊÒÀ  ÈÍÆÅÍÅÐÀ-ÊÎÍÑÒÐÓÊÒÎÐÀ\n";
        for (int i = from - 1; i < to; i++)
        {
            f << "| ";
            f << tableRows[i].GetTaskNumber();
            for (int j = tableRows[i].GetTaskNumber().length(); j < 8; j++) f << ' ';
            f << "| ";
            f << tableRows[i].GetDate();
            for (int j = tableRows[i].GetDate().length(); j < 11; j++) f << ' ';
            f << "| ";
            f << tableRows[i].GetCustomer();
            for (int j = tableRows[i].GetCustomer().length(); j < 16; j++) f << ' ';
            f << "| ";
            f << tableRows[i].GetTask();
            for (int j = tableRows[i].GetTask().length(); j < 101; j++) f << ' ';
            f << "| ";
            f << tableRows[i].GetProjNumber();
            for (int j = tableRows[i].GetProjNumber().length(); j < 7; j++) f << ' ';
            f << "| ";
            f << tableRows[i].GetSurname();
            for (int j = tableRows[i].GetSurname().length(); j < 21; j++) f << ' ';
            f << "| ";
            f << tableRows[i].GetStatus();
            for (int j = tableRows[i].GetStatus().length(); j < 16; j++) f << ' ';
            f << "| ";
            f << tableRows[i].GetNote();
            for (int j = tableRows[i].GetNote().length(); j < 36; j++) f << ' ';
            f << "|\n";
        }
        f.close();
        return (1);
    }
private:
    RowRegZd* tableRows = new RowRegZd[1];
};