/*7)Vamos chamar uma sequência de números inteiros positivos x1, x2, …, xn de acumulativa se cada elemento xi dessa sequência é maior ou igual a soma de todos os elementos anteriores, 
isto é, se xi >= x1 + x2 + · · · + xi−1. Escreva um programa em C que leia uma sequência de números inteiros positivos terminada por zero e verifique se ela é acumulativa. 
O número zero apenas indica o final da sequência e não deve ser considerado na verificação da propriedade.*/

#include <stdio.h>

int main ()
{
    int numero[1000], i=0, soma=0;
    while (scanf(" %d", &numero[i]) == 1 && numero[i] != 0)
    { 
        soma = soma + numero[i];
        i++;
    }
    soma = soma - numero [i-1];
    if (soma > numero [i-1])
    {
        printf("Não é cumulativa\n");
    }
    else 
    {
        printf("É cumulativa\n");
    }
    return 0;
} 