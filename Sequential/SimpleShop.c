#include <stdio.h>

int main() {
    int itemAmount = 0;
    float itemValue = 0;
    float total = 0;

    printf("Type the item value: ");
    scanf("%f", &itemValue);

    printf("Type the amount of item: ");
    scanf("%d", &itemAmount);

    total = itemValue*itemAmount;

    printf("Total: %f", total);
}