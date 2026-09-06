#include <stdio.h>

int main() {
    int valor;
    
    printf("Digite o valor a ser sacado: ");
    scanf("%d", &valor);
    
    printf("Notas entregues:\n");
    printf("R$ 100: %d\n", valor / 100);
    valor %= 100;
    
    printf("R$ 50 : %d\n", valor / 50);
    valor %= 50;
    
    printf("R$ 20 : %d\n", valor / 20);
    valor %= 20;
    
    printf("R$ 10 : %d\n", valor / 10);
    valor %= 10;
    
    printf("R$ 5  : %d\n", valor / 5);
    valor %= 5;
    
    printf("R$ 2  : %d\n", valor / 2);
    valor %= 2;
    
    printf("R$ 1  : %d\n", valor);
    return 0;
}