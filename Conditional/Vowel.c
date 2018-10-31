#include <stdio.h>

int main() {
    char c;

    printf("Type one letter: ");
    scanf("%c", &c);

    // Vowel A E I O U
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        printf("It`s a vowel");
    }
    else {
        printf("It`s a consonant");
    }
}