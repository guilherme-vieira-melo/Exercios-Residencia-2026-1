#include <stdio.h>

int main() {
    char classe;
    float consumo, tarifa, vf, icms, vp;

    printf("Digite a Classe Consumidora (A, B ou C): ");
    scanf(" %c", &classe);
    printf("Digite o Consumo em KWh: ");
    scanf("%f", &consumo);

    if (classe == 'A' || classe == 'a') tarifa = 0.5;
    else if (classe == 'B' || classe == 'b') tarifa = 0.8;
    else if (classe == 'C' || classe == 'c') tarifa = 1.0;
    else {
        printf("Classe invalida.\n");
        return 1;
    }

    vf = consumo * tarifa;
    icms = 0.30 * vf;
    vp = vf + icms;

    printf("Valor a Pagar: R$ %.2f\n", vp);
    return 0;
}
