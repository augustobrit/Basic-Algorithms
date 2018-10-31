#include <stdio.h>

int main() {
    float n;

    printf("Type a number: ");
    scanf("%f", &n);

    if (n > 0) {
        printf("Positive");
    }
    else if (n < 0) {
        printf("Negative");
    }
    else {
        printf("Zero");
    }
}