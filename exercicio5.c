/*6)Fazer um programa em C para calcular e imprimir a soma dos números primos entre dois inteiros N e K positivos informados pelo usuário no início da execução do programa.*/
#include <stdio.h>

int main ()
{
    int N, N_original, K, soma=0, x=2, primo=1;
    scanf(" %d", &N);
    scanf(" %d", &K);
    if (N>K)
    {
        printf("invalid");
        return 0;
    }
    if (K<0 || N<0)
    {
        printf("invalid");
        return 0;
    }
    N_original=N;
    for (int i = N_original; i<=K; i++)
    {
        if (i>=2)
        {
            while (x<i)
            {
                if(i%x != 0)
                {
                    primo = i;
                }
                x++;
            }
        }
        soma=soma+i;
        x=2;
    }
    printf("%d\n", soma);
    return 0;
}