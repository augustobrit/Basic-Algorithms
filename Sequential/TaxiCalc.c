#include <stdio.h>

const float GAS_PRICE = 1.72;

int main() {
    float xf;
    float xi;
    float l;
    float money;

    printf("Initial Odometer (km): ");
    scanf("%f", &xi);

    printf("Final Odometer (km): ");
    scanf("%f", &xf);

    printf("Consumed Gas (l): ");
    scanf("%f", &l);

    printf("Money Received ($): ");
    scanf("%f", &money);

    float dx = xf - xi;
    float average = dx / l;
    float cost = average * GAS_PRICE;
    float gain = money - cost;

    printf("Average: %f", average);
    printf("Cost: %f", cost);
    printf("Gain: %f", gain);
}