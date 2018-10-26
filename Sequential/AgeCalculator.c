#include <stdio.h>

int main() {
    int bornYear;
    int currentYear;
    int futureYear;
    int age;
    int ageInFuture;

    printf("Type your born year: ");
    scanf("%d", &bornYear); 

    printf("Type current year: ");
    scanf("%d", &currentYear);

    printf("Type a future year: ");
    scanf("%d", &futureYear);

    if (currentYear > bornYear && futureYear > bornYear) {
        age = currentYear - bornYear;
        ageInFuture = futureYear - bornYear;
    }
    else
    {
        printf("Current or Future year needs to be higher then born year.");
    }    

    printf("Age: %d years. \n", age);
    printf("Age in: %d - %d years.", futureYear, ageInFuture);
}