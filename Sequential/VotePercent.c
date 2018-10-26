#include <stdio.h>

int main() {
    float white;
    float n;
    float valid;
    float total;
    float whitePerc;
    float nPerc;
    float validPerc;

    printf("Type amount of White vote: ");
    scanf("%f", &white);

    printf("Type amount of null vote: ");
    scanf("%f", &n);

    printf("Type amount of valid vote: ");
    scanf("%f", &valid);

    total = white + n + valid;
    whitePerc = white / total * 100;
    nPerc = n / total * 100;
    validPerc = valid / total * 100;

    printf("White: %f percent. \n", whitePerc);
    printf("Null: %f percent. \n", nPerc);
    printf("Valid: %f percent. \n", validPerc);
    printf("Total: %f percent. \n", total);
}