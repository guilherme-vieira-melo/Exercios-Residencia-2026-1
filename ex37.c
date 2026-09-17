#include <stdio.h>

int main() {
    double S = 0.0;
    int num = 1;
    for (int den = 1; den <= 50; den++) {
        S += (double)num / den;
        num += 2;
    }
    printf("Valor de S: %.4f\n", S);
    return 0;
}
