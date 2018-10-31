#include <stdio.h>

const float wA = 0.2;
const float wB = 0.3;
const float wC = 0.5;

int main() {
    float a, b, c;
    float avg;

    printf("A: ");
    scanf("%f", &a);

    printf("B: ");
    scanf("%f", &b);

    printf("C: ");
    scanf("%f", &c);

    avg = (a * wA + b * wB + c * wC) / (wA + wB + wC);

    printf("Average: %f \n", avg);

    if (avg > 7.0) {
        printf("Approved.");
    }
    else {
        printf("Reproved.");
    }
}