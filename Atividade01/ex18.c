#include <stdio.h>
#include <stdlib.h>

// Leia um valor em m, calcule e escreva o equivalente em cm.

int main()
{
    float m, cm;

    printf("Digite o valor em m: ");
    scanf("%f", &m);

    cm = m * 100;

    printf("%.2f m = %.2f cm", m, cm);

    return 0;
}
