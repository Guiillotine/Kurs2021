#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>

using namespace std;
class Table;
class Row;

class Row
{
public:
    virtual int Putfile(string fname) = 0;
    void SetTaskNumber(string taskNumber)
    {
        this->taskNumber = taskNumber;
    }
    string GetTaskNumber()
    {
        return(taskNumber);
    }
    void SetSurname(string surname)
    {
        this->surname = surname;
    }
    string GetSurname()
    {
        return(surname);
    }
protected:
    string taskNumber;
    string surname;
};

public class Table
{
public:
    Table()
    {
        rowsNum = 0;
    }
    virtual void ArrResize() = 0; 
    int GetRowsNum()
    {
        return(rowsNum);
    }
    virtual int Putfile(string fname) = 0;
    virtual int Getfile(string fname) = 0;

protected:
    int rowsNum;
};