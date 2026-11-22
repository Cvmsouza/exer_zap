/*5) Escreva um programa que receba um número inteiro maior que 1 e verifique se ele é primo ou não primo. 
Ao final, o programa deve exibir uma mensagem indicando o resultado da verificação.*/

#include <stdio.h>

int main ()
{
    int n, i=2;
    if (scanf(" %d", &n) !=1)
    {
        return 1;
    }
    if (n <= 1)
    {
        return 1;
    }
    while(i<n)
    {
        if(n%i==0)
        {
            printf("Não é primo\n");
            return 1;
        }
        i++;
    }
        printf("É primo\n");
    return 0;
}