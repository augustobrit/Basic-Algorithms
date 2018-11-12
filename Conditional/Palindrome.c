#include <stdio.h>

int main() {
    int number;

    printf("Type a number between 1000-9999: ");
    scanf("%d", &number);

    int c = number / 100;
    int d = number % 100;
    int sum = c + d;
    int sumSqr = sum * sum;

    if (sumSqr == number) {
        printf("It's a Palindrome.");
    }
    else {
        printf("Isn't a Palindrome.");
    }
}