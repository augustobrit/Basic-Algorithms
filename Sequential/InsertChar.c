#include <stdio.h>

int main() {
    char letter;

    printf("Type a letter: ");
    scanf("%c", &letter);

    printf("--- \n");
    printf("|");
    printf("%c", letter); 
    printf("| \n");
    printf("---");
}