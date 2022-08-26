#include <stdio.h>
#include <stdlib.h>

// Leia um valor em real (R$), calcule e escreva 70% deste valor.

int main()
{
    float real, porcentagem_70;

    printf("Digite um valor em real: ");
    scanf("%f", &real);

    porcentagem_70 = (real * 0.7);

    printf("70 porcento de %.2f vale %.2f", real, porcentagem_70);
    return 0;
}
