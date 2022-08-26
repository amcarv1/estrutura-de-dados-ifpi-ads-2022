#include <stdio.h>
#include <stdlib.h>

// Enunciado
// Questão 01) Leia uma velocidade em m/s, calcule e escreva esta velocidade em km/h. (Vkm/h = Vm/s * 3.6)

int main()
{
    float velocidade_ms, velocidade_km;

    printf("Digite o valor da velocidade (m/s): ");
    scanf("%f", &velocidade_ms);

    velocidade_km = velocidade_ms * 3.6;

    printf("%.2f m/s = %.2f km/h", velocidade_ms, velocidade_km);

    return 0;
}
