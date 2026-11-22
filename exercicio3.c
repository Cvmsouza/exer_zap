/*3) Escreva um programa em C para ler uma quantidade indeterminada de números, via teclado, até que "0" seja digitado. Seu programa deve informar:
a) O produto dos termos (5 pontos)
b) A média geométrica dos termos, isto é    nx1* x2*...*xn (20 pontos)
c) A amplitude, isto é, a diferença do   maior valor e menor valor (20 pontos)*/

#include <stdio.h>
#include <math.h>

int main ()
{
    float numero, prod=0, med=0, soma=0, max=0, min=0, amplitude=0, count =0;
    if (scanf("%f", &numero) != 1)
    {
        printf ("Valor invalido");
        return 0;
    }
        if (numero == 0)
    {
        printf ("Nenhum termo valido");
        return 0;
    }
    max=numero;
    min=numero;
    med=numero;
    prod=numero;
    soma=numero;
    count=1;
    amplitude=max-min;
    while(scanf("%f", &numero) == 1)
    {
        if(numero == 0)
        {
            break;
        }
        else
        {
            if(numero > max)
            {
                max = numero;
            }
            else 
            {
                max = max;
            }
            if(numero < min)
            {
                min = numero;
            }
            else 
            {
                min = min;
            }
        }
        count++;
        prod = prod * numero;
        soma = soma + numero;
        amplitude = max - min;
    }
    med=pow(prod, 1.0/count);
    printf("Prod:%.02f\n", prod);
    printf("Media:%.02f\n", med);
    printf("Amplitude:%.02f\n", amplitude);
    return 0;
}