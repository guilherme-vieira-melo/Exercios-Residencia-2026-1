#include <stdio.h>

int main() {
    int A, B, temp;
    
    printf("Digite os valores de A e B: ");
    scanf("%d %d", &A, &B);
    
    temp = A;
    A = B;
    B = temp;
    
    printf("Valores trocados -> A: %d | B: %d\n", A, B);
    return 0;
}