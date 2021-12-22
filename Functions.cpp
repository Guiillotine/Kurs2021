#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string.h>



// запись 1 строки в файл
int putfile(char name[], char fio[], char napr[], int &kurs, int &chas, int &att, char fname[], int x) // x - номер строки (0 дл€ добавлени€ новой)
{

    return (1);
}

// подсчет количества строк в существующем файле
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

// считывание 1 строки из файла
int getfile(char name[], char fio[], char napr[], int &kurs, int &chas, int &att, char fname[], int x) // x - номер строки в файле 
{
    char ch;
    x -= 1; // коррекци€ номера строки дл€ перевода строк в символы
    FILE* file;
    file = fopen(fname, "r");
        fseek(file, 51 * x, SEEK_SET);
        //считывание строки из файла и преобразование ее в структуру
        for (int i = 0; i < 15; i++)
        {
            if ((ch = getc(file)) != '_') name[i] = ch;//—читывание символов из строки исключа€ '_'
            else name[i] = '\0';  //добавление символа "конец строки"
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
        fscanf(file, "%d%d%d", &kurs, &chas, &att); //—читывание и преобразование цифр в int
        ch = getc(file);// очистка потока (после fscanf в потоке остаетс€ \n)
    fclose(file);
    return (1);
}
