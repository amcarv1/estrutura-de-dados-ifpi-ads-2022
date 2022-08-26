#include <stdio.h>
#include <stdlib.h>

// Leia o valor da base e altura de um retângulo, calcule e escreva sua área. (área = base * altura)

int main()
{
    float base, altura, area;

    printf("Digite o valor da base: ");
    scanf("%f", &base);

    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    area = (base * altura);

    printf("Area = %.2f", area);
    return 0;
}
