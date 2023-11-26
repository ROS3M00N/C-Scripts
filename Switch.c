/*Faça um programa que receba um vetor de caracteres, gere e imprima um outro vetor onde as
vogais, do primeiro vetor, sejam substituídas pelo caracter *.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char vec[6];

    printf("Insert word (Max of 5 characters): ");
    fgets(vec, 10, stdin);

    for (int i = 0; i < 5; i++)
    {
        if (vec[i] == 'a' || vec[i] == 'e' || vec[i] == 'i' || vec[i] == 'o' || vec[i] == 'u')
        {
            vec[i] = '*';
        }
    }

    puts(vec);

    return 0;
}