#include <stdio.h>

int main() {
    float cm, pol;
    
    printf("Digite o valor em cm: ");
    scanf("%f", &cm);
    
    pol = cm / 2.54;
    printf("%.2f cm equivale a %.2f polegadas\n", cm, pol);
    return 0;
}