/*(série) Escreva um programa em C++ que lê um número inteiro $n$, calcule e imprima a soma dos termos da série abaixo, para $n$ termos:
Nessa série, o valor geral de um termo é dado por $\text{Termo } i = (2^{i+1} + 1)/2^i$, onde $i = 1, 2, 3, \dots$*/
#include <stdio.h>
#include <math.h>

int main ()

{
    int n, i;
    float numerador, denominador, termo, soma=0;
    if (scanf(" %d", &n) !=1)
    {
        return 1;
    }
    for (i=1;i<=n;i++)
    {
        numerador=(pow(2,i+1))+1;
        denominador=(pow(2,i));
        termo=numerador/denominador;
        soma=soma+termo;
    }
    printf("%.2f\n", soma);
    return 0;
}