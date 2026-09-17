#include <stdio.h>

int main() {
    int M, soma = 0;
    printf("Digite a ordem M da matriz: ");
    scanf("%d", &M);

    int A[M][M], D[M];

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < M; i++) {
        D[i] = A[i][i];
        soma += D[i];
    }

    printf("Soma da Diagonal Principal: %d\n", soma);
    printf("Vetor D: ");
    for (int i = 0; i < M; i++) printf("%d ", D[i]);
    printf("\n");
    return 0;
}
