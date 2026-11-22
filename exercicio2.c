/*2) Escreva um programa que leia números até que o usuário digite um número negativo. 
Para cada número lido, calcule a soma de todos os números entre 0 e o número lido. Por exemplo, 
se o usuário digitar o número 8, você deve calcular 0+1+2+3+4+5+6+7+8 e imprimir 36*/

#include <stdio.h>

int main ()
{
    float a, soma=0;
    while (scanf(" %f", &a) > 0)
    {
        if (a<0)
        {
            break;
        }
        else
        {
            soma = soma + a;
        }
    }
    printf(" %.02f\n", soma);
    return 0;
}