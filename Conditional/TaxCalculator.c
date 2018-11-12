#include <stdio.h>
#include <stdlib.h>

int main() {
    float income;
    float tax;

    printf("Type your income: ");
    scanf("%f", &income);

    if (income <= 1000) {
        printf("Free");
    }
    else
    {
        if (income > 1000 && income <= 2500) {
        tax = income * 0.1 - 100;
        printf("Tax: %f", tax);
    } 
        else {
            tax = income * 0.25 - 475;
            printf("Tax: %f", tax);
        }
    }
}