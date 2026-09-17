#include <stdio.h>

int main() {
    printf("Fahrenheit | Celsius\n");
    for (int f = 50; f <= 65; f++) {
        float c = (5.0 / 9.0) * (f - 32);
        printf("   %d°F    |  %.2f°C\n", f, c);
    }
    return 0;
}
