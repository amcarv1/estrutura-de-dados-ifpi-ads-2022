#include <stdio.h>
#include <stdlib.h>

// Leia um valor em kg (quilograma), calcule e escreva o equivalente em g(grama).


int main()
{
    float kg, g;

    printf("Digite o valor em kg: ");
    scanf("%f", &kg);

    g = kg * 1000;

    printf("%.2f kg = %.2f g", kg, g);

    return 0;
}
