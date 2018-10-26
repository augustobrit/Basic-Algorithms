#include <stdio.h>

int main() {
    int a;
    int b;
    int aux;

    printf("Type a interger value for variable A: ");
    scanf("%d", &a);

    printf("Type a value interger for variable B: ");
    scanf("%d", &b);

    aux = a;    
    a = b;
    b = aux;

    printf("A: %d", a);
    printf(" ");
    printf("B: %d", b);
}