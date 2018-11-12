#include <stdio.h>

int main() {
    float money;
    float credit;

    printf("Type your Money: ");
    scanf("%f", &money);

    if (money >= 400) {
        credit = money * 0.30f;
    } 
    else if (money < 400 && money >= 300) {
        credit = money * 0.25f;
    }
    else if (money < 300 && money >= 200) { 
        credit = money * 0.20f;
    }
    else {
        credit = money * 0.10f;
    }

    printf("Credit: %f", credit);
}