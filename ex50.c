#include <stdio.h>

int main() {
    float alt, maiorAlt = 0, menorAlt = 99.0, somaAltMulheres = 0;
    char sexo;
    int homens = 0, mulheres = 0;

    for (int i = 0; i < 15; i++) {
        printf("Pessoa %d - Altura e Sexo (M/F): ", i + 1);
        scanf("%f %c", &alt, &sexo);

        if (alt > maiorAlt) maiorAlt = alt;
        if (alt < menorAlt) menorAlt = alt;

        if (sexo == 'F' || sexo == 'f') {
            somaAltMulheres += alt;
            mulheres++;
        } else if (sexo == 'M' || sexo == 'm') {
            homens++;
        }
    }

    printf("a) Maior Altura: %.2f | Menor Altura: %.2f\n", maiorAlt, menorAlt);
    if (mulheres > 0) printf("b) Media Altura Mulheres: %.2f\n", somaAltMulheres / mulheres);
    printf("c) Numero de Homens: %d\n", homens);
    return 0;
}
