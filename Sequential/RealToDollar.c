#include <stdio.h>

int main() {
    float dollar;
    float real;
    float conversion;

    printf("Real(R$): ");
    scanf("%f", &real);
    
    printf("Dollar($): ");
    scanf("%f", &dollar);

    conversion = real / dollar;

    printf("%f Real(R$) in Dollar($) is: %f", real, conversion);
}