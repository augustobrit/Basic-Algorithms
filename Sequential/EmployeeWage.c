#include <stdio.h>

int main() {
    int n;
    float hours;
    float valuePerHour;
    float wage;

    printf("Type your number: ");
    scanf("%d", &n);

    printf("Type hours worked: ");
    scanf("%f", &hours);

    printf("Type value per hour: ");
    scanf("%f", &valuePerHour);

    wage = hours * valuePerHour;

    printf("Employee Number: #%d | Wage: %f R$", n, wage);
}