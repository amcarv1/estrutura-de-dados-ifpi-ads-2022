#include <stdio.h>
#include <stdlib.h>

// Leia 3 números, calcule e escreva a média dos números.

int main()
{
    float num01, num02, num03, media;

    printf("Digite o valor do primeiro numero: ");
    scanf("%f", &num01);

    printf("Digite o valor do primeiro numero: ");
    scanf("%f", &num02);

    printf("Digite o valor do primeiro numero: ");
    scanf("%f", &num03);

    media = (num01 + num02 + num03) / 3;

    printf("Media = %.2f", media);

    return 0;
}
