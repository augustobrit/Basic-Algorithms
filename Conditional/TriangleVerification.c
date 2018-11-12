#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, c;
    
    printf("Type a value for side A: ");
    scanf("%f", &a);

    printf("Type a value for side B: ");
    scanf("%f", &b);

    printf("Type a value for side C: ");
    scanf("%f", &c);

    if ((a < b + c && a > abs(b - c)) || 
        (b < a + c && b > abs(a - c)) || 
        (c < a + b && c > abs(a - b))) {
        if (a == b && a == c && c == b) {
            printf("Triangle: Equilateral");
        }
        else if (a != b && a != c && c != b) {
            printf("Triangle: Scalene");
        }
        else {
            printf("Triangle: Isosceles");
        }
    } 
    else {
        printf("This values can't form a triangle.");
    }
}