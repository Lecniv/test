#include <conio.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    system("chcp 1251");
    setlocale(LC_CTYPE, "rus");
    printf("hello world!");
    getch();
    printf("Да здравствуют славяне!!!");
    getch();
    return 0;
}