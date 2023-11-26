/*Faça um programa que receba e imprima um vetor com o seu nome (nome completo) e o total
de letras que ele possui.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char name[] = "Retro";
    int length;

    length = strlen(name);

    printf("Text: %s.\nText Lenght: %d letters.\n", name, length);

    return 0;
}