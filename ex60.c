#include <stdio.h>

int main() {
    int R[4][5], maior, pLinha = 0, pColuna = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("R[%d][%d]: ", i, j);
            scanf("%d", &R[i][j]);
            if (i == 0 && j == 0) {
                maior = R[i][j];
            } else if (R[i][j] > maior) {
                maior = R[i][j];
                pLinha = i;
                pColuna = j;
            }
        }
    }
    printf("Maior elemento: %d em R[%d][%d]\n", maior, pLinha, pColuna);
    return 0;
}
