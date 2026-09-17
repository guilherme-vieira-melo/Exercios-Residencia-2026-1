#include <stdio.h>

int main() {
    int qtd;
    printf("Digite o numero de macas: ");
    scanf("%d", &qtd);
    float total = (qtd < 12) ? qtd * 0.30 : qtd * 0.25;
    printf("Total da compra: R$ %.2f\n", total);
    return 0;
}
