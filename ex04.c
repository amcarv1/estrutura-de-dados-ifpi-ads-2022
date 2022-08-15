#include <stdio.h>
#include <stdlib.h>

// Enunciado
// Questão 04) Leia 2 números inteiros, calcule e escreva o quociente e o resto da divisão do 1o pelo 2o.

int main()
{
    int num01, num02;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num01);
    printf("Digite o segundo numero: ");
    scanf("%d", &num02);

    printf("Quociente = %d \n", (num01 / num02));
    printf("Resto da Divisao = %d", (num01 % num02));

    return 0;
}
