#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    int sum = 0;
    int product = 0;

    printf("Type a value for A: ");
    scanf("%d", &a);

    printf("Type a value for B: ");
    scanf("%d", &b);

    sum = a+b;
    product = a*b;

    printf("The sum of A + B = %d", sum);
    printf(" ");
    printf("The product of A x B = %d", product);
}