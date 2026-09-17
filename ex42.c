#include <stdio.h>
#include <math.h>

int main() {
    double X, A, S = 0.0;
    printf("Digite os valores de X e A: ");
    scanf("%lf %lf", &X, &A);

    for (int i = 1; i <= 20; i++) {
        double termo1 = (double)i / (A - (i - 1));
        double termo2 = (21.0 - i) / pow(X, i);
        S += termo1 * termo2;
    }
    printf("Valor de S: %.6lf\n", S);
    return 0;
}
