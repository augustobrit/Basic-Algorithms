#include <stdio.h>

const float PI = 3.14159;

int main() {
    float p;
    float r;

    printf("Type circle radius: ");
    scanf("%f", &r);

    p = 2.0 * PI * r;
    
    printf("The perimeter is: %f", p);
}