#include <stdio.h>
#include <stdlib.h>

// Leia o valor do raio de uma circunferência, calcule e escreva seu comprimento.(c = 2 *  *r)

int main()
{
    float raio, comprimento;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    comprimento = (2 * 3.14 * raio);

    printf("Comprimento = %.2f", comprimento);

    return 0;
}
