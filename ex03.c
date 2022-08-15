#include <stdio.h>
#include <stdlib.h>

// Enunciado
// Questão 03) Leia uma velocidade em km/h, calcule e escreva esta velocidade em m/s. (Vm/s = Vkm/h / 3.6).

int main()
{
    float velocidade_ms, velocidade_km;

    printf("Digite o valor da velocidade (km/h): ");
    scanf("%f", &velocidade_km);

    velocidade_ms = velocidade_km / 3.6;

    printf("%.2f km/h = %.2f m/s", velocidade_km, velocidade_ms);

    return 0;
}
