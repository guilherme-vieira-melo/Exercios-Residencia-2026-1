#include <stdio.h>

int main() {
    int num;
    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("O numero e positivo.\n");
    } else if (num < 0) {
        printf("O numero e negativo.\n");
    } else {
        printf("O numero e zero.\n");
    }
    return 0;
}