#include <stdio.h>

int main() {
    float massaInicial, massaFinal;
    int tempo = 0;

    printf("Digite a massa inicial (em gramas): ");
    scanf("%f", &massaInicial);
    massaFinal = massaInicial;

    while (massaFinal >= 0.5) {
        massaFinal /= 2.0;
        tempo += 50;
    }

    printf("Massa Inicial: %.2f g\n", massaInicial);
    printf("Massa Final: %.4f g\n", massaFinal);
    printf("Tempo Necessario: %d segundos\n", tempo);
    return 0;
}
