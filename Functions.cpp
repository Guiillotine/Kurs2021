#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string.h>



// ������ 1 ������ � ����
int putfile(char name[], char fio[], char napr[], int &kurs, int &chas, int &att, char fname[], int x) // x - ����� ������ (0 ��� ���������� �����)
{

    return (1);
}

// ������� ���������� ����� � ������������ �����
int countfile(char fname[])
{
    FILE* file;
    int ch;
    int k1 = 0;
    file = fopen(fname, "r");
    while ((ch = getc(file)) != EOF)
    {
        if (ch == '\n') k1 += 1;
    }
    fclose(file);
    return (k1);
}

// ���������� 1 ������ �� �����
int getfile(char name[], char fio[], char napr[], int &kurs, int &chas, int &att, char fname[], int x) // x - ����� ������ � ����� 
{
    char ch;
    x -= 1; // ��������� ������ ������ ��� �������� ����� � �������
    FILE* file;
    file = fopen(fname, "r");
        fseek(file, 51 * x, SEEK_SET);
        //���������� ������ �� ����� � �������������� �� � ���������
        for (int i = 0; i < 15; i++)
        {
            if ((ch = getc(file)) != '_') name[i] = ch;//���������� �������� �� ������ �������� '_'
            else name[i] = '\0';  //���������� ������� "����� ������"
        }
        for (int i = 15; i < 32; i++)
        {
            if ((ch = getc(file)) != '_') fio[i - 15] = ch;
            else fio[i - 15] = '\0';
        }
        for (int i = 32; i < 41; i++)
        {
            if ((ch = getc(file)) != '_') napr[i - 32] = ch;
            else napr[i - 32] = '\0';
        }
        fscanf(file, "%d%d%d", &kurs, &chas, &att); //���������� � �������������� ���� � int
        ch = getc(file);// ������� ������ (����� fscanf � ������ �������� \n)
    fclose(file);
    return (1);
}
