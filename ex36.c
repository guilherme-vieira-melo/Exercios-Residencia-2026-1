#include <stdio.h>

int main() {
    double S = 0.0;
    for (int i = 1; i <= 10; i++) {
        S += 1.0 / i;
    }
    printf("Valor de S: %.4f\n", S);
    return 0;
}
