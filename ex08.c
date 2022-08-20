#include <stdio.h>
#include <stdlib.h>

// Leia 3 notas de um aluno e o peso de cada nota, calcule e escreva a média ponderada.

int main()
{
    float nota01, nota02, nota03, mediaPonderada;
    int peso01, peso02, peso03;

    printf("Primeira nota: ");
    scanf("%f", &nota01);
    printf("Peso Primeira nota: ");
    scanf("%d", &peso01);

    printf("Segunda nota: ");
    scanf("%f", &nota02);
    printf("Peso Segunda nota: ");
    scanf("%d", &peso02);

    printf("Terceira nota: ");
    scanf("%f", &nota03);
    printf("Peso Terceira nota: ");
    scanf("%d", &peso03);

    mediaPonderada = ((nota01 * peso01) + (nota02 * peso02) + (nota03 * peso03)) / (peso01 + peso02 + peso03);

    printf("Media ponderada = %.2f", mediaPonderada);
    return 0;
}
