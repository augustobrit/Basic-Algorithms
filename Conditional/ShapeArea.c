#include <stdio.h>

int main () {
    int opt = 0;
    float area = 0;
    float b;
    float h;
    float bMinor;
    float bMajor;
    float r;
    float height;

    printf("Choose an option: 1 - Triangle Area | 2 - Circle Area | 3 - Trapezium Area");
    scanf("%d", &opt);

    switch(opt) {
        case 1 :
            printf("Type Triangle Base: ");
            scanf("%f", &b);
            printf("Type Triangle Height: ");
            scanf("%f", &h);
            area = b * h / 2;
            break;
        case 2 :
            printf("Type Radius: ");
            scanf("%f", &r);
            area = 3.14 * r * r;
            break;
        case 3 :
            printf("Type b: ");
            scanf("%f", &bMinor);
            printf("Type B: ");
            scanf("%f", &bMajor);
            printf("Type Height: ");
            scanf("%f", &height);
            area = ((bMinor+bMajor)*height)/2;
            break;
        default :
            printf("Invalid Option");
    }

    printf("Area = %f", area);
}