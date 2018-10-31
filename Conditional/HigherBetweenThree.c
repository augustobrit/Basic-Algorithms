#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;

    printf("Type a value for A: ");
    scanf("%d", &a);

    printf("Type a value for B: ");
    scanf("%d", &b);

    printf("Type a value for C: ");
    scanf("%d", &c);

    int ab = (a + b + abs(a - b)) / 2;
    int higher = (ab + c + abs(ab - c)) / 2;

    printf("Higher: %d", higher);
}