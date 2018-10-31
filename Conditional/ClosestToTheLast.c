#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, d;
    int last, closest;
    int d1, d2, d3, d4;

    printf("Type a int number for A: ");
    scanf("%d", &a);

    printf("Type a int number for B: ");
    scanf("%d", &b);

    printf("Type a int number for C: ");
    scanf("%d", &c);

    printf("Type a int number for D: ");
    scanf("%d", &d);

    printf("Type a int number for E: ");
    scanf("%d", &last);
    
    d1 = abs(a - last);
    d2 = abs(b - last);
    d3 = abs(c - last);
    d4 = abs(d - last);

    if (a != b && b != c && c != d && d != last) {
        if (d1 < d2 && d1 < d3 && d1 < d4) {
        closest = a;
        }
        else if (d2 < d3 && d2 < d4) {
            closest = b;
        }
        else if (d3 < d4) {
            closest = c;
        }
        else {
            closest = d;
        }

        printf("Closest to the last number is:  %d", closest);
    }
    else {
        printf("Type only different numbers!");
    }
}