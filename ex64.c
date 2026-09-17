#include <stdio.h>

int main() {
    int m, n;
    printf("Digite o numero de linhas e colunas de B: ");
    scanf("%d %d", &m, &n);

    int B[m][n], maiorSoma = 0, linhaMaior = 0;

    for (int i = 0; i < m; i++) {
        int somaLinha = 0;
        for (int j = 0; j < n; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
            somaLinha += B[i][j];
        }
        if (i == 0 || somaLinha > maiorSoma) {
            maiorSoma = somaLinha;
            linhaMaior = i;
        }
    }

    printf("Linha com maior soma: %d (Soma = %d)\n", linhaMaior, maiorSoma);
    return 0;
}
