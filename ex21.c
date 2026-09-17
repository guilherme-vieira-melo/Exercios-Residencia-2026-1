#include <stdio.h>

int main() {
    int a, b, c;
    printf("Digite os tres lados do triangulo: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) printf("Triangulo Equilatero\n");
        else if (a == b || b == c || a == c) printf("Triangulo Isosceles\n");
        else printf("Triangulo Escaleno\n");
    } else {
        printf("Nao formam um triangulo.\n");
    }
    return 0;
}
