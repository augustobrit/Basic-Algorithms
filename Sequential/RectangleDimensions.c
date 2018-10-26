#include <stdio.h>

int main() {
    float a;
    float b;
    float c;
    float d;
    float area;
    float perimeter;

    printf("       B         \n");
    printf("  |----------|   \n");
    printf("  |          |   \n");
    printf("A |          | C \n");
    printf("  |          |   \n");
    printf("  |----------|   \n");
    printf("       D         \n");

    printf("Type a value for side A: ");
    scanf("%f", &a);
    printf("Type a value for side B: ");
    scanf("%f", &b);
    
    if (a == c && b == d) {
        if (a + c != b + d) {
            printf("It`s a rectangle.");
            area = a * b;
            perimeter = a + b + c + d;
        }
        else {
            printf("It`s a square.");
            area = a * a;
            perimeter = a * 4;
        }
        printf("Area: %f", area);
        printf(" ");
        printf("Perimeter: %f", perimeter);
    }
    else {
        printf("It`s not a rectangle or square.");
    }
}