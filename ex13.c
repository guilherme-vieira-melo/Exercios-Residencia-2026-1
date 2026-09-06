#include <stdio.h>

int main() {
    float precoFabrica, precoFinal;
    
    printf("Digite o preco de fabrica do automovel: ");
    scanf("%f", &precoFabrica);
    
    // Impostos: 45% | Revendedor: 28%
    precoFinal = precoFabrica + (precoFabrica * 0.45) + (precoFabrica * 0.28);
    
    printf("Preco final ao consumidor: R$ %.3f\n", precoFinal);
    return 0;
}