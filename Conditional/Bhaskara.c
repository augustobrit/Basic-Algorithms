#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float x1,x2;
    float delta;

    printf("A: ");
    scanf("%f", &a);

    printf("B: ");
    scanf("%f", &b);

    printf("C: ");
    scanf("%f", &c);

    if (a != 0) {
        delta = b*b-(4*a*c);
        if (delta < 0) {
            printf("non-real roots.");
        }
        else {
            x1 = (-b+sqrtf(delta))/(2*a);
            x2 = (-b-sqrtf(delta))/(2*a);

            printf("Delta: %f \n", delta);
            printf("x1: %f \n", x1);
            printf("x2: %f \n", x2);
        }
    }    
    else {
        printf("A can't be zero.");
        return 0;
    }
}