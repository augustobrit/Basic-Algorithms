#include <stdio.h>

int main() {
    int a, b, c;

    printf("Type a value for side A: ");
    scanf("%d", &a);

    printf("Type a value for side B: ");
    scanf("%d", &b);

    printf("Type a value for side C: ");
    scanf("%d", &c);

    int aux = 0;

    // 123
    // 132
    // 213
    // 231
    // 321
    // 312

    if (a < b && a < c) {
        // 1 3 2
        if (b > c) {
            aux = b;
            b = c;
            c = aux;
        }
    } 
    else if (b < a && b < c) {
        if (a > c) {
           // 3 1 2
            aux = b;
            b = c;
            c = a;
            a = aux;
        }
        else {
            // 2 1 3
            aux = b;
            b = a;
            a = aux;
        }
    }
    else {
        aux = c;
        c = a;
        a = aux;

        if (b > c) {
            aux = b;
            b = c;
            c = aux;
        }
    }

    printf("%d %d %d", a, b, c);
}