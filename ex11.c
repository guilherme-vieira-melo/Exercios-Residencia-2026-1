#include <stdio.h>

int main() {
    float compra, pago, troco;
    int trocoCentavos;
    
    printf("Digite o valor da compra: ");
    scanf("%f", &compra);
    printf("Digite o valor pago: ");
    scanf("%f", &pago);
    
    troco = pago - compra;
    printf("Troco total: R$ %.2f\n", troco);
    
    // Convertendo para centavos para evitar erros de ponto flutuante
    trocoCentavos = (int)(troco * 100 + 0.5);
    
    printf("Cedulas de R$ 50: %d\n", trocoCentavos / 5000); trocoCentavos %= 5000;
    printf("Cedulas de R$ 20: %d\n", trocoCentavos / 2000); trocoCentavos %= 2000;
    printf("Cedulas de R$ 10: %d\n", trocoCentavos / 1000); trocoCentavos %= 1000;
    printf("Cedulas de R$ 5 : %d\n", trocoCentavos / 500);  trocoCentavos %= 500;
    printf("Cedulas de R$ 2 : %d\n", trocoCentavos / 200);  trocoCentavos %= 200;
    printf("Moedas de R$ 1  : %d\n", trocoCentavos / 100);  trocoCentavos %= 100;
    printf("Moedas de R$0.50: %d\n", trocoCentavos / 50);   trocoCentavos %= 50;
    printf("Moedas de R$0.25: %d\n", trocoCentavos / 25);   trocoCentavos %= 25;
    printf("Moedas de R$0.10: %d\n", trocoCentavos / 10);   trocoCentavos %= 10;
    printf("Moedas de R$0.05: %d\n", trocoCentavos / 5);    trocoCentavos %= 5;
    printf("Moedas de R$0.01: %d\n", trocoCentavos);
    
    return 0;
}