#include <stdio.h>

int main () {
    float h1, h2;
    float p1, p2;

    printf("Professor 1 Hour: ");
    scanf("%f", &h1);

    printf("Professor 1 Value: ");
    scanf("%f", &p1);

    printf("Professor 2 Hour: ");
    scanf("%f", &h2);

    printf("Professor 2 Value: ");
    scanf("%f", &p2);

    int income1 = h1 * p1;
    int income2 = h2 * p2;

    if (income1 > income2) {
        printf("Professor 1");
    }
    else {
        printf("Professor 2");
    }
    
}