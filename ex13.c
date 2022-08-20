#include <stdio.h>
#include <stdlib.h>

// Leia o valor do raio de uma esfera, calcule e escreva seu volume.

int main()
{
    float raio, volume;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    volume = ((4 * 3.14 * (raio * raio * raio))/ 3);

    printf("Volume = %.2f", volume);

    return 0;
}
