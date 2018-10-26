#include <stdio.h>
#include <math.h>

int main() {
    float a;
    float b;
    float c;

    printf("Type A: ");
    scanf("%f", &a);

    printf("Type B: ");
    scanf("%f", &b);

    printf("Type C: ");
    scanf("%f", &c);

    float avg = cbrt(a * b * c);

    printf("Geometric Average: %f", avg);
}