#include <stdio.h>

int main() {
    int employees;
    int bicycles;
    float minWage;
    float costPrice;

    printf("Employees: ");
    scanf("%d", &employees);

    printf("Total bicycles sold: ");
    scanf("%d", &bicycles);

    printf("Min Wage: ");
    scanf("%f", &minWage);

    printf("Bicycle Cost Price: ");
    scanf("%f", &costPrice);

    float solidGain = bicycles * costPrice * 0.50;
    float totalComission = bicycles * costPrice * 0.15;
    float totalWage = totalComission + 2 * minWage * employees;
    float wagePerEmployee = totalWage / employees;
    float liquidGain = solidGain - totalWage;

    printf("Wage Per Employee: %f \n", wagePerEmployee);
    printf("Liquid Gain: %f  \n", liquidGain);
}   