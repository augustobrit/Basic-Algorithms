#include <stdio.h>

int main() {
    int numbers[8999];
    int c;
    int d;
    int sum;
    int sqr;
    int number;

    for(int i = 0; i < 8999; i++) {
        number = i + 1000;
        c = number / 100;
        d = number % 100;
        sum = c + d;
        sqr = sum * sum;

        if (sqr == number) {
            numbers[i] = number;
        }
        else {
            numbers[i] = 0;
        }      
    }

    int count = 0;

    for(int i = 0; i < 8999; i++) {
        if (numbers[i] != 0) {
            count++;
            printf("Number: %d \n", numbers[i]);      
        }
    }

    printf("\n Total: %d", count);    
}