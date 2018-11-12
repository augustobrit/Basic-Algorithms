#include <stdio.h>

int main() {
    float sum;
    float diff;
    float prod;
    float division;
    float n1;
    float n2;
    char opt;
    float value;

    printf("Type an operation: + or - or * or / ");
    scanf("%c", &opt);

    printf("Type first number: ");
    scanf("%f", &n1);

    printf("Type second number: ");
    scanf("%f", &n2);

    switch (opt) {
        case '+':
            value = n1 + n2;
            printf("%f + %f = %f", n1, n2, value);
            break;
        case '-':
            value = n1 - n2;
            printf("%f - %f = %f", n1, n2, value);
            break;
        case '*':
            value = n1 * n2;
            printf("%f * %f = %f", n1, n2, value);
            break;
        case '/':
            if (n2 > 0) {
                value = n1 / n2;
                printf("%f / %f = %f", n1, n2, value);
            }
            else {
                printf("Second number must be > 0.");
            }
            break;
        default:
            printf("Invalid Operation.");
            break;
    }
}