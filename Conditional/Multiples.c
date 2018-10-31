#include <stdio.h>

int main() {
    int a, b, aux;

    printf("Type a value for A: ");
    scanf("%d", &a);

    printf("Type a value for B: ");
    scanf("%d", &b);

    if (a < b) {
        aux = b;
        b = a;
        a = aux; 
    }

    if (a % b == 0) {
        printf("Is multiples.");
    } 
    else {
        printf("Isn`t multiples.");
    }
}