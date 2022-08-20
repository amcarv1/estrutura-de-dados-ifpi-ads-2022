#include <stdio.h>
#include <stdlib.h>

// Leia um número inteiro de metros, calcule e escreva quantos Km e quantos metros ele corresponde.

int main()
{
    float m, km;

    printf("Digite o valor em m: ");
    scanf("%f", &m);

    km = m / 1000;

    printf("%.2f m = %.2f km", km, m);

    return 0;
}
