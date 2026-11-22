/*4) Escreva um programa que receba uma palavra e imprima se ela é palíndromo ou não (Um palíndromo é uma palavra que se lê da mesma forma de trás para frente)*/

#include <stdio.h>

int main ()
{
    int i=0, j=0, count = 0;
    char palavra [256];
    scanf("%s", palavra);
    while (palavra[j] != '\0')
    {
        palavra[j];
        j++;
    }
    j=j - 1;
    while (i<j)
    {
        if (palavra[i] == palavra[j])
        {
            i++;
            j--;
        }
        else 
        {
            printf("Não é palindromo\n");
            return 0;
        }
    }
    printf("É palindromo\n");
    return 0;
}