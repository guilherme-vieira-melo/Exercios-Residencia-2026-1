#include <stdio.h>

int main() {
    float pe, totalPE = 0.0, totalPagar;
    int cp;

    while (1) {
        printf("Digite o preco de etiqueta (0 para encerrar): ");
        scanf("%f", &pe);
        if (pe == 0) break;
        totalPE += pe;
    }

    if (totalPE > 0) {
        printf("Escolha a condicao de pagamento (1 a 4): ");
        scanf("%d", &cp);

        switch (cp) {
            case 1: totalPagar = totalPE * 0.90; break;
            case 2: totalPagar = totalPE * 0.95; break;
            case 3: totalPagar = totalPE; break;
            case 4: totalPagar = totalPE * 1.10; break;
            default: printf("Condicao invalida.\n"); return 1;
        }
        printf("Total a pagar: R$ %.2f\n", totalPagar);
    }
    return 0;
}
