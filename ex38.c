#include <stdio.h>

int main() {
    float x, S = 0.0;
    printf("Digite o valor de x: ");
    scanf("%f", &x);

    for (int i = 1; i <= 20; i++) {
        S += 1.0 / (x - i);
    }
    printf("Soma dos 20 primeiros termos: %.4f\n", S);
    return 0;
}
