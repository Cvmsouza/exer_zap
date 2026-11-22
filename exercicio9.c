/*10) Escreva um programa em C para que o usuário digite vários números
até que ele digite o número zero, que significa fim de repetição. Você deve imprimir na tela o
maior número e o segundo maior número encontrado nessa sequência que o usuário
digitou.*/

#include <stdio.h>

int main ()
{
    int max=0, segundo_max=0, n;
    if(scanf("%d", &n)!=1)
    {
        return 1;
    }
    max=n;
    segundo_max=n;
    while(scanf(" %d", &n) == 1 && n != 0)
    {
        if(n>=max)
        {
            segundo_max=max;
            max=n;
        }
        else if (n>segundo_max || max == segundo_max)
        {
            if (n!=max)
            {
                segundo_max=n;
            }
        }
    }
    printf("%d %d\n", max, segundo_max);
    return 0;
}