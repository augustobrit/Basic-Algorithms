#include <stdio.h>

int main() {
    int n;

    printf("Type a integer number: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Even");
    }
    else {
        printf("Odd");
    }
}