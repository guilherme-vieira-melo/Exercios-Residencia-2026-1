#include <stdio.h>

int main() {
    int idade, maiores = 0;
    for (int i = 0; i < 10; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);
        if (idade >= 18) maiores++;
    }
    printf("Quantidade de pessoas maiores de idade: %d\n", maiores);
    return 0;
}
