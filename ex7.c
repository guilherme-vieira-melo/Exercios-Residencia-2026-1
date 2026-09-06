#include <stdio.h>

int main() {
    float r, h, area, volume;
    float pi = 3.14159;
    
    printf("Digite o raio e a altura do cilindro: ");
    scanf("%f %f", &r, &h);
    
    area = 2 * pi * r * (h + r);
    volume = pi * r * r * h;
    
    printf("Area total: %.2f\n", area);
    printf("Volume: %.2f\n", volume);
    return 0;
}