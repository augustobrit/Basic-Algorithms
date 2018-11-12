#include <stdio.h>

int main() {
    int n1, n2;

    printf("Type a integer for N1: ");
    scanf("%d", &n1);

    printf("Type a integer for N1: ");
    scanf("%d", &n2);

    if (n1 < n2) {
        printf("N1 Low \n");
        printf("N2 Higher \n");
    }
    else if (n1 > n2 ) {
        printf("N1 Higher \n");
        printf("N2 Lower \n");
    }
    else {
        printf("Equals \n");
    }

    if (n1 % 2 == 0 ) {
        printf("N1 Odd \n");
    }
    else {
        printf("N1 Even \n");
    }
    
    if (n2 % 2 == 0) {
        printf("N2 Odd \n");
    }
    else {
        printf("N2 Even \n");
    }
}