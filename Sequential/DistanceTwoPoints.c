#include <stdio.h>
#include <math.h>

int main() {
    float x1;
    float x2;
    float y1;
    float y2;

    printf("Type x1: ");
    scanf("%f", &x1);

    printf("Type y1: ");
    scanf("%f", &y1);

    printf("Type x2: ");
    scanf("%f", &x2);
    
    printf("Type y2: ");
    scanf("%f", &y2);

    float dx = x2 - x1;
    float dy = y2 - y1;
    float d = sqrt(pow(dx, 2) + pow(dy, 2));
    printf("Distance: %f", d);
}