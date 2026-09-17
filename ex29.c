#include <stdio.h>

int main() {
    int num;
    for (int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num >= 100 && num <= 200) {
            printf("Voce digitou um numero entre 100 e 200\n");
        } else {
            printf("Voce digitou um numero fora da faixa entre 100 e 200\n");
        }
    }
    return 0;
}
