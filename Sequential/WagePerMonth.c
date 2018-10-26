#include <stdio.h>

int main() {
    float wage;
    float readjustment;
    float currentWage;

    printf("Type your Wage: ");
    scanf("%f", &wage);

    printf("Type the readjustment: ");
    scanf("%f", &readjustment);

    currentWage = wage - wage * readjustment / 100;

    printf("Your current wage with readjustment is: : %f", currentWage);
}