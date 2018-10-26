#include <stdio.h>

int main() {
    float x;

    printf("Type a value: ");
    scanf("%f", &x);

    x = x * 2.0;

    printf("The double of typed value is: %f", x);
}