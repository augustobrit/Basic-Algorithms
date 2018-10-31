#include <stdio.h>

int main() {
    int n;
    int n2;

    printf("Type a integer number: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        n2 = n / 2;
        printf("%d double of: %d", n, n2);
    }
    else {
        printf("The number isn`t a double of any integer number.");
    }
}