#include <stdio.h>

int main() {
    int x, y;
    
    printf("Digite dois numeros (x e y): ");
    scanf("%d %d", &x, &y);
    
    if (y != 0) {
        printf("Quociente: %d\n", x / y);
        printf("Resto: %d\n", x % y);
    } else {
        printf("Divisao por zero nao e permitida.\n");
    }
    return 0;
}