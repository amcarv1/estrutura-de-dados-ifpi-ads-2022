#include <stdio.h>
#include <stdlib.h>

// Leia o salário de um trabalhador e escreva seu novo salário com um aumento de 25%.

int main()
{
    float salario, novoSalario;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    novoSalario = salario + (salario * 0.25);

    printf("Salario Antigo: %.2f\nSalario com Aumento: %.2f", salario, novoSalario);

    return 0;
}
