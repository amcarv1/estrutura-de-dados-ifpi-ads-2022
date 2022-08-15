#include <stdio.h>
#include <stdlib.h>

// Enunciado
// Questão 02) Leia o valor do dólar e um valor em dólar, calcule e escreva o equivalente em real (R$).

int main()
{
    float cotacao_dolar, carteira_dolar, real;

    printf("Digite o valor do dolar: ");
    scanf("%f", &cotacao_dolar);
    printf("Digite o valor possuido de dolar: ");
    scanf("%f", &carteira_dolar);

    real = (carteira_dolar * cotacao_dolar);

    printf("%.2f U$S = %.2f R$", carteira_dolar, real);

    return 0;
}
