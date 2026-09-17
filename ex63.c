#include <stdio.h>

int main() {
    int M;
    printf("Digite a ordem M da matriz: ");
    scanf("%d", &M);

    int A[M][M], T[M][M];

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
            T[j][i] = A[i][j];
        }
    }

    printf("Matriz Transposta T:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }
    return 0;
}
