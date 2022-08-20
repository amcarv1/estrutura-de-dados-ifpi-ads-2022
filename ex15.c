#include <stdio.h>
#include <stdlib.h>

// Leia uma temperatura em °F, calcule e escreva a equivalente em °C. (t°C = (5 * t°F - 160) / 9).

int main()
{
    float c, f;

    printf("Digite o valor da temp em F: ");
    scanf("%f", &f);

    c = ((5 * f - 160) / 9);

    printf("%.2f °F = %.2f °C", f, c);

    return 0;
}
