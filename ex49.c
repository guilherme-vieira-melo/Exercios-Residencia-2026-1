#include <stdio.h>

int main() {
    float salario, somaSalario = 0, maiorSalario = 0;
    int filhos, somaFilhos = 0, hab = 0, ate1000 = 0;

    printf("Pesquisa da Prefeitura (Salario negativo encerra):\n");

    while (1) {
        printf("Salario: ");
        scanf("%f", &salario);
        if (salario < 0) break;

        printf("Numero de filhos: ");
        scanf("%d", &filhos);

        somaSalario += salario;
        somaFilhos += filhos;
        hab++;

        if (salario > maiorSalario) maiorSalario = salario;
        if (salario <= 1000.0) ate1000++;
    }

    if (hab > 0) {
        printf("a) Media Salarial: R$ %.2f\n", somaSalario / hab);
        printf("b) Media de Filhos: %.2f\n", (float)somaFilhos / hab);
        printf("c) Maior Salario: R$ %.2f\n", maiorSalario);
        printf("d) Perc. ate R$ 1000.00: %.2f%%\n", ((float)ate1000 / hab) * 100);
    }
    return 0;
}
