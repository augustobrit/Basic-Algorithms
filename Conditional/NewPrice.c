#include <stdio.h>

int main() {
    float price;
    float newPrice;

    printf("Type the product price: ");
    scanf("%f", &price);

    if (price <= 50) {
        newPrice = price + price * 0.05f;
    }
    else if (price > 50 && price <= 100) {
        newPrice = price + price * 0.10f;
    }
    else {
        newPrice = price + price * 0.15f;
    }

    printf("New Price: %f \n", newPrice);

    if (newPrice <= 80) {
        printf("Cheap");
    }
    else if (newPrice <= 80) {
        printf("Normal;");
    }
    else if (newPrice <= 80) {
        printf("Expensive");
    }
    else {
        printf("Very Expensive");
    }
}