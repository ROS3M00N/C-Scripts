/*Faça um programa que receba o vetor nome com o seu nome (nome completo), fornecido via
teclado. Utilize a função fgets para a leitura e em seguida use a função puts para imprimir o
nome. Substitua a função fgets pela função scanf e avalie os resultados.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char name[10]; 

    printf("Insert name: ");
    //scanf("%s", name);
    fgets(name, 10, stdin);

    puts(name);
    return 0;
}

/*PT-BR - Pode-se usar tanto o fgets quanto o scanf para gerar a saída necessária, não foi notado
nenhuma diferença maior em usar um ou outra função.

ENG - We can use either fgets or scanf to generate the requested output menssage, it wasn't noticed
any diference beteween the functions.*/