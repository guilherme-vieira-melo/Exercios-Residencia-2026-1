#include <stdio.h>

int main() {
    float media1 = (7 + 8 + 9) / 3.0;
    float media2 = (4 + 5 + 6) / 3.0;
    float somaMedias = media1 + media2;
    float mediaDasMedias = somaMedias / 2.0;
    
    printf("Media 1 (7,8,9): %.2f\n", media1);
    printf("Media 2 (4,5,6): %.2f\n", media2);
    printf("Soma das medias: %.2f\n", somaMedias);
    printf("Media das medias: %.2f\n", mediaDasMedias);
    return 0;
}