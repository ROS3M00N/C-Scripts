/*Faça um programa que receba uma string. Esta deverá ser passada para uma função que
conte a quantidade de letras desta string (simulando a função strlen). Lembre-se que uma string
em C termina com \0.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int length(char str[])
{
    int strLength = 0;
    for (int i = 0; i < 5; i++)
    {
        strLength++;        
    }
    
    printf("Data length: %d", strLength);
}

int main()
{
    char str[5];

    printf("insert data: ");
    fgets(str, 5, stdin);

    length(str);

    return 0;
}