#include <stdio.h>
#include <stdlib.h>

// Leia uma temperatura em °C, calcule e escreva a equivalente em °F. (t°F = (9 * t°C + 160) / 5)

int main()
{
    float c, f;

    printf("Digite o valor da temp em C: ");
    scanf("%f", &c);

    f = ((9 * c + 160) / 5);

    printf("%.2f °C = %.2f °F", c, f);

    return 0;
}
