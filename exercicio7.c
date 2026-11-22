/*8)Escreva um programa em C que, dado um número inteiro n, calcule seu
fatorial.*/
#include <stdio.h>

int main ()
{
    int n, fatorial = 1, i;
    if (scanf(" %d", &n) != 1)
    {
        return 1;
    }
    else if (n<0)
    {
        return 1;
    }
    else if (n<=1)
    {
        printf("%d\n", fatorial);
        return 1;
    }
    i=n; 
    while (i>0)
    {
        fatorial = fatorial * i;
        i--;
    }
    printf("%d\n", fatorial);
    return 0;
}