#include <stdio.h>

int main() {
    float a;
    float b;
    float c;
    float d;
    
    printf("Type a value for A: ");
    scanf("%f", &a);
    printf("Type a value for B: ");
    scanf("%f", &b);
    printf("Type a value for C: ");
    scanf("%f", &c);
    printf("Type a value for D: ");
    scanf("%f", &d);

    float diff = (a * b) - (c * d);

    printf("The product of difference is: %f", diff);
}