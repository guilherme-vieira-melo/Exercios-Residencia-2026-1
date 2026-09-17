#include <stdio.h>

int main() {
    float h, pesoIdeal;
    int sexo;

    while (1) {
        printf("Digite a altura (negativa para parar): ");
        scanf("%f", &h);
        if (h < 0) break;

        printf("Digite o sexo (1: Feminino, 2: Masculino): ");
        scanf("%d", &sexo);

        if (sexo == 1) pesoIdeal = 62.1 * h - 44.7;
        else if (sexo == 2) pesoIdeal = 72.7 * h - 58;
        else { printf("Sexo invalido.\n"); continue; }

        printf("Peso ideal: %.2f kg\n", pesoIdeal);
    }
    return 0;
}
