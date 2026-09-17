#include <stdio.h>

int main() {
    int A[10], B[10], C[20];
    printf("Digite 10 elementos para A:\n");
    for (int i = 0; i < 10; i++) scanf("%d", &A[i]);

    printf("Digite 10 elementos para B:\n");
    for (int i = 0; i < 10; i++) scanf("%d", &B[i]);

    for (int i = 0; i < 10; i++) {
        C[2 * i] = A[i];
        C[2 * i + 1] = B[i];
    }

    printf("Vetor C Intercalado: ");
    for (int i = 0; i < 20; i++) printf("%d ", C[i]);
    printf("\n");
    return 0;
}
