#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include "RegZadClass.h"

void TableRegZad::ArrResize()
{
    RowRegZad* tableRow2 = new RowRegZad[RowsNum + 1];
    for (int i = 0; i < RowsNum; i++) tableRow2[i] = tableRow[i];
    tableRow = tableRow2;
}

