#include <stdio.h>

int main() {
    float c;
    float f;

    printf("Type the temperature in Farenheit: ");
    scanf("%f", &f);

    c = 5.0 * (f - 32.0) / 9.0;

    printf("Temperature in Celsius: %f", c);
}