#include <stdio.h>

int main() {
    int val, dentro = 0, fora = 0;
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &val);
        if (val >= 10 && val <= 50) dentro++;
        else fora++;
    }
    printf("Dentro do intervalo [10, 50]: %d\n", dentro);
    printf("Fora do intervalo: %d\n", fora);
    return 0;
}
