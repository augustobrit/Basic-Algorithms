#include <stdio.h>

int main(void) {
    int valueToPay = 0;
    int valuePaid = 0;
    int diff = 0;

    int fifty = 0;
    int twenty = 0;
    int ten = 0;
    int five = 0;
    int two = 0;
    int one = 0;

    printf("Type a value to pay: ");
    scanf("%d", &valueToPay);

    printf("Type a payment: ");
    scanf("%d", &valuePaid);

    diff = valuePaid - valueToPay;

    if (diff > 0) {
        if (diff / 50 != 0) {
            fifty = diff / 50;
            diff = diff % 50;
        }
        if (diff / 20 != 0) {
            twenty = diff / 20;
            diff = diff % 20;
        }
        if (diff / 10 != 0) {
            ten = diff / 10;
            diff = diff % 10;
        }
        if (diff / 5 != 0) {
            five = diff / 5;
            diff = diff % 5;
        }
        if (diff / 2 != 0) {
            two = diff / 2;
            diff = diff % 2;
        }
        if (diff / 1 != 0) {
            one = diff / 1;
            diff = diff % 1;
        }

        printf("50$ Amount: %d \n", fifty);
        printf("20$ Amount: %d \n", twenty);
        printf("10$ Amount: %d \n", ten);
        printf("5$ Amount: %d \n", five);
        printf("2$ Amount: %d \n", two);
        printf("1$ Amount: %d \n", one);

    } else if (diff < 0){
        printf("The amount paid must be higher then value to pay");
    } else {
        printf("No changes...");
    }

    return 0;
}