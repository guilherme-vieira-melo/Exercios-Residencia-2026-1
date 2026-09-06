#include <stdio.h>

int main() {
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    printf("Antecessor: %d | Sucessor: %d\n", num - 1, num + 1);
    return 0;
}