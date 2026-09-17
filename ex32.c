#include <stdio.h>

int main() {
    int num, maior;
    printf("Digite o 1º numero: ");
    scanf("%d", &num);
    maior = num;

    for (int i = 2; i <= 20; i++) {
        printf("Digite o %dº numero: ", i);
        scanf("%d", &num);
        if (num > maior) maior = num;
    }
    printf("Maior valor fornecido: %d\n", maior);
    return 0;
}
