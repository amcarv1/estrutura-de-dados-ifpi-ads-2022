#include <stdio.h>
#include <stdlib.h>

// Leia um valor em km, calcule e escreva o equivalente em m.

int main()
{
    float km, m;

    printf("Digite o valor em Km: ");
    scanf("%f", &km);

    m = km * 1000;

    printf("%.2f °km = %.2f m", km, m);

    return 0;
}
