/*Ler um inteiro N e uma sequência de N inteiros, gerando na saída o valor de N, 
os valores máximo e mínimo observados (inteiros) e a média (real) e o desvio padrão (real) dos N valores lidos.*/

#include <stdio.h>

int main ()
{
    int n, value, max, min, i;
    double soma=0, med=0, somaquadrados=0, variancia=0, desv=0;
    if(scanf(" %d", &n) != 1 || n<= 0)
    {
        return 1;
    }
    for(i=0; i<n; i++)
    {
        if(scanf("%d", &value) != 1)
        {
            return 1;
        }
        if (i == 0)
        {
            max=value;
            min=value;
        }
        else
        {
            if(value>max)
            {
                max=value;
            }
            if(value<min)
            {
                min=value;
            }
        }
        soma=soma+value;
        somaquadrados=somaquadrados+(double)value * value;
    }
    med=soma/n;
    variancia = (somaquadrados/n)-(med*med);
    if (variancia>0)
    {
        desv=variancia;
        for(i=0;i<30;i++)
        {
            desv=0.5*(desv + variancia / desv);
        }
    }
    printf("%d %d %d %.2f %.2f\n", n, max, min, med, desv);
    return 0;
}