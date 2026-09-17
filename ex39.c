#include <stdio.h>

int main() {
    int t1 = 1, t2 = 1, proximo;
    printf("%d %d ", t1, t2);
    for (int i = 3; i <= 10; i++) {
        proximo = t1 + t2;
        printf("%d ", proximo);
        t1 = t2;
        t2 = proximo;
    }
    printf("\n");
    return 0;
}
