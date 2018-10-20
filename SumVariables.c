#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    int sum = 0;
 
    printf("Type a value for A: ");
    scanf("%d", &a); 

    printf("Type a value for B: ");
    scanf("%d", &b);

    printf("Type a value for C: ");
    scanf("%d", &c);

    sum = a+b+c;

    printf("The sum of A+B+C is: %d", sum);
}