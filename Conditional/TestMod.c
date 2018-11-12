#include <stdio.h>

int main() {
    int n1, n2;

    printf("Type a integer for N1: ");
    scanf("%d", &n1);

    printf("Type a integer for N1: ");
    scanf("%d", &n2);

    if (n1 % n2 == 1) {
        printf("Case 1: %d", n1 + n2 + (n1 % n2));    
    } 
    else if (n1 % n2 == 2) {
        if (n1 % 2 == 0) {
            printf("N1 Odd \n");
        }
        else {
            printf("N1 Even \n");
        }
        if (n2 % 2 == 0) {
            printf("N2 Odd \n");
        }
        else {
            printf("N1 Even \n");
        }
    } 
    else if (n1 % n2 == 3) {
        printf("Case 3: %d", (n1 + n2) * n1);
    } 
    else if (n1 % n2 == 4) {
        printf("Case 3: %d", (n1 + n2) / n2);
    } 
    else {
        printf("Squares n1 and n2: %d %d", n1 * n1, n2 * n2);
    }
}