#include <stdio.h>
#include <math.h>

int main() {
    char c;
    float n;
    float result = 1;

    printf("Type ! - Factorial || @ - Square || R - Square Root");
    scanf("%c", &c);
    printf("Type a number: ");
    scanf("%f", &n);

    switch(c) {
        case '!':
            for(int i = 1; i <= n; i++) {
                result *= i;
            }
            break;
        case '@':
            result = n * n;
            break;
        case 'R':
            result = sqrtf(n);
            break;
        default : 
            printf("Invalid Option.");
            break;
    }

    printf("Result: %f", result);
}