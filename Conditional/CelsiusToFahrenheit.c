#include <stdio.h>

int main() {
    float c;

    printf("Temperature in Celsius: ");
    scanf("%f", &c);

    float f = c * 9 / 5 + 32;
    float diff = f - c;

    printf("Farenheit: %f \n", f);

    if (diff > 100) {
        printf("Difference: %f", diff);
    }
}