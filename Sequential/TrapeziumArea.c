#include <stdio.h>

int main() {
    float b1;
    float b2;
    float h;
    float a;

    printf("Type B (cm): ");
    scanf("%f", &b1);

    printf("Type b (cm): ");
    scanf("%f", &b2);

    printf("Type h (cm): ");
    scanf("%f", &h);

    a = (b1 + b2) * h / 2;

    printf("Area (cm²): %f", a);
}