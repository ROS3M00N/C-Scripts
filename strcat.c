/*Escreva uma função que receba duas string. A função deverá concatenar a segunda string ao
final da primeira (simulando a função strcat).*/
#include<stdio.h>
#include<string.h>
#include<assert.h>

void cat(char str1[], char str2[])
{
    int i, j;

    for(i = 0; str1[i] != '\0'; ++i )
    for (j = 0; str2[j] != '\0'; ++j) 
    {
        str1[i] = str2[j];    
    }

    str1[i] = '\0';
}

int main()
{
    char str1[] = "abc";
    char str2[] = "defg";

    cat(str1, str2);

    assert(strcmp("abcdefg", str1) == 0);

    return 0;
}