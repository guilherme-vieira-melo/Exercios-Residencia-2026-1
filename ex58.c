#include <stdio.h>

int main() {
    int A[10], B[10];
    printf("Digite 10 elementos para A:\n");
    for (int i = 0; i < 10; i++) scanf("%d", &A[i]);

    for (int i = 0; i < 10; i++) B[i] = A[9 - i];

    printf("Vetor B Invertido: ");
    for (int i = 0; i < 10; i++) printf("%d ", B[i]);
    printf("\n");
    return 0;
}
