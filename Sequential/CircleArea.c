#include <stdio.h>

const float PI = 3.14159;

int main() {
    float area;
    float radius; 

    printf("Radius (cm): ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("Area (cm²): %f", area);
}