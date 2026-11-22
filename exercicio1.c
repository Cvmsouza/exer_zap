/*1) Na construção civil, a proporção áurea é muito utilizada para criar ambientes harmônicos. 
Uma forma de obter essa proporção é através da Sequência de Fibonacci, 
uma série de números inteiros onde cada termo, a partir do terceiro, é a soma dos dois anteriores. 
A sequência tradicional é a seguinte: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,....
Desenvolva um programa que calcule o termo k dessa sequência, sendo k indicado pelo usuário.*/

#include <stdio.h>

int main ()
{
    int primeiro=0, segundo=1, terceiro,k,soma=0;
    if(scanf("%d", &k) != 1)
    {
        printf("invalido\n");
        return 1;
    }
    else if(k<0)
    {
        printf("invalido\n");
        return 1;
    }
    else
    {
        for (int i = 3; i<=k; i++)
        {
            terceiro=primeiro+segundo;
            primeiro=segundo;
            segundo=terceiro;
        }
    }
    printf("%d\n", terceiro);
    return 0;
}