#include <stdio.h>

int main() {
    float salarioFixo, vendas, salarioFinal;
    
    printf("Digite o salario fixo: ");
    scanf("%f", &salarioFixo);
    printf("Digite o total de vendas: ");
    scanf("%f", &vendas);
    
    salarioFinal = salarioFixo + (vendas * 0.15);
    
    printf("Salario Fixo: R$ %.2f\n", salarioFixo);
    printf("Salario Final: R$ %.2f\n", salarioFinal);
    return 0;
}