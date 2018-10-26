#include <stdio.h>

int main() {
    float avg;
    float a;
    float b;
    float c;

    printf("Type a value for A: ");
    scanf("%f", &a);
    
    printf("Type a value for B: ");
    scanf("%f", &b);

    printf("Type a value for C: ");
    scanf("%f", &c);

    avg = 3 / ((1/a) + (1/b) + (1/c));

    printf("The harmonic average is: %f", avg);
}