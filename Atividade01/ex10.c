#include <stdio.h>
#include <stdlib.h>

// Leia o valor do lado de um quadrado, calcule e escreva sua área. (área = lado2

int main()
{
    float ladoQuadrado, area;

    printf("Valor do lado do quadrado: ");
    scanf("%f", &ladoQuadrado);

    area = ladoQuadrado * 2;

    printf("Valor da area %.2f", area);
    return 0;
}
