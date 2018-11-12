#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, c, d, e;
    float avg;

    printf("Type A: ");
    scanf("%f", &a);

    printf("Type B: ");
    scanf("%f", &b);

    printf("Type C: ");
    scanf("%f", &c);

    printf("Type D: ");
    scanf("%f", &d);

    printf("Type E: ");
    scanf("%f", &e);

    avg = (a + b + c + d + e) / 5;

    if (a > avg) {
        printf("%f \n", a);
    }
    
    if (b > avg) {
        printf("%f \n", b);
    }
    
    if (c > avg) {
        printf("%f \n", c);
    }

    if (d > avg) {
        printf("%f \n", d);
    }

    if (e > avg) {
        printf("%f \n", e);
    }
 
    printf("Average: %f \n", avg);
}