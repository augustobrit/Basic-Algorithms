#include <stdio.h>
#include <math.h>

int main() {
    float x, y;
    float radius;
    float d;

    printf("Point Coord X: ");
    scanf("%f", &x);

    printf("Point Coord Y: ");
    scanf("%f", &y);

    printf("Circle Radius: ");
    scanf("%f", &radius);
    
    d = sqrtf((x*x) + (y*y));

    printf("Distance: %f \n", d);

    if (d < radius) {
        printf("Status: Inside");
    }
    else if (d > radius) {
        printf("Status: Out");
    }
    else {
        printf("Status: Border");
    }
}