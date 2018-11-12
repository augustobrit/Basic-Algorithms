#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, d, e;
    int l;

    printf("Type A: ");
    scanf("%d", &a);

    printf("Type B: ");
    scanf("%d", &b);

    printf("Type C: ");
    scanf("%d", &c);

    printf("Type D: ");
    scanf("%d", &d);

    printf("Type E: ");
    scanf("%d", &e);

    int ab = (a + b + abs(a - b)) / 2;
    int abc = (ab + c + abs(ab - c)) / 2;
    int abcd = (abc + d + abs(abc - d)) / 2;
    int abcde = (abcd + e + abs(abcd - e)) / 2;

    if (a < b && a < c && a < d && a < e) {
        l = a;
    }
    else if (b < c && b < d && b < e) {
        l = b;
    }
    else if (c < d && c < e) {
        l = c;
    }
    else if (d < e) {
        l = d;
    }
    else {
        l = e;
    }

    printf("Higher: %d \n", abcde);
    printf("Lower: %d", l);    
}