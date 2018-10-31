#include <stdio.h>

int main() {
    int a;
    int b;
    int c;

    printf("Type a integer number A: ");
    scanf("%d", &a);

    printf("Type a integer number B: ");
    scanf("%d", &b);

    printf("Type a integer number C: ");
    scanf("%d", &c);

    int lower = 0;

    if (a < b && a < c) {
        lower = a;
    }
    else if (b < a && b < c) {
        lower = b;
    } 
    else if (c < a && c < b) {
        lower = c;
    }
    else {
        printf("Same");
        return 0;
    }

    printf("Lower: %d", lower);
}