#include <stdio.h>

const float SIZE = 0.19;

int main() {
    float w;
    float h;
    float a;
    int amount;

    printf("Wall width (m): ");
    scanf("%f", &w);

    printf("Wall height (m): ");
    scanf("%f", &h);

    a = w * h;
    amount = a / SIZE;

    printf("Area (m²): %f | Amount: %d approximately.", a, amount);
}