#include <stdio.h>

int main() {
    float a, b;
    
    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);
    
    printf("Soma: %.2f\n", a + b);
    printf("Produto: %.2f\n", a * b);
    if (b != 0) {
        printf("Quociente: %.2f\n", a / b);
    } else {
        printf("Quociente: Indefinido (divisao por zero)\n");
    }
    return 0;
}