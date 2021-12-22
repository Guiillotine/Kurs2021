#pragma once
/*#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string>
using namespace std;
class RowRegZad;

class RowRegZad
{
public:
    void InputStr();
    int TaskNumber();
    string Date();
    string Customer();
    string Task();
    int ProjNumber();
    string Surname();
    string Status();
    string Note();
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
    void AddStr();
    void EditTable();*/
    void ArrResize();
private:
    RowRegZad* tableRow = new RowRegZad[1];
    int RowsNum;
};