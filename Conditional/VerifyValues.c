#include <stdio.h>

int main() {
    int a, b, c, d; 

    printf("Type a value for A: ");
    scanf("%d", &a);

    printf("Type a value for B: ");
    scanf("%d", &b);

    printf("Type a value for C: ");
    scanf("%d", &c);

    printf("Type a value for D: ");
    scanf("%d", &d);

    if (b > c && a > d) {
        if (c >= 0 && d >= 0) {
            int cd = c + d;
            int ab = a + b;

            if (cd > ab) {
                printf("Values acceptable.");
            }
            else {
                printf("Values not acceptable.");
            }
        }
        else {
            printf("Values not acceptable.");
        }
    } 
    else {
        printf("Values not acceptable.");
    }
}