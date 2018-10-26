#include <stdio.h>

int main() {
    float l;
    float ml;
    float min;
    float rate;
    float t;

    printf("Type the amount of water in liters: \n");
    scanf("%f", &l);

    printf("Type the hole flow rate in ml/min \n");
    printf("ml: ");
    scanf("%f", &ml);
    printf("Time: ");
    scanf("%f", &min);

    rate = (ml / 1000.0) / (min / 60.0);
    t = l/rate;

    printf("Time to empty: %f hours.", t);
}