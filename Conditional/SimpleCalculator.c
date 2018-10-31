#include <stdio.h>
#include <stdlib.h>

int main() {
    int opt;
    
    float n1, n2;
    
    float avg;
    float diff;
    float prod;
    float division;

    printf("Choose: 0 - Average | 1 - Difference | 2 - Product | 3 - Division: ");
    scanf("%d", &opt);

    printf("Type a value for n1: ");
    scanf("%f", &n1);

    printf("Type a value for n2: ");
    scanf("%f", &n2);

    switch(opt) {
        case 0 :
            avg = (n1 + n2) / 2;
            printf("Average: %f \n", avg);
            break;
        case 1 :
            diff = abs(n1 - n2);
            printf("Difference: %f \n", diff);
            break;
        case 2 :
            prod = n1 * n2;
            printf("Product: %f \n", prod);
            break;
        case 3 :
            if (n2 != 0) {
                division = n1 / n2;
                printf("Division: %f", division);
            }
            else {
                printf("n2 must be != 0");
            }
            break;
        default :
            printf("Invalid option.");
            break;
    }
}