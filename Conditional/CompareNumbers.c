#include <stdio.h>

int main() {
    int x, y;

    printf("Type x: ");
    scanf("%d", &x);

    printf("Type y: ");
    scanf("%d", &y);

    if (x > y) {
        printf("X is greater than Y");
    }
    else if (x < y) {
        printf("Y is greater than X");
    } 
    else {
        printf("X is equals Y");
    }
}