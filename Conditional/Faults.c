#include <stdio.h>

int main() {
    float g1, g2, g3, g4;
    int faults;

    printf("Type your faults: ");
    scanf("%d", &faults);

    printf("Type your grade A: ");
    scanf("%f", &g1);

    printf("Type your grade B: ");
    scanf("%f", &g2);

    printf("Type your grade C: ");
    scanf("%f", &g3);
    
    printf("Type your grade D: ");
    scanf("%f", &g4);

    float avg = (g1 + g2 + g3 + g4 ) / 4;

    if (avg >= 7 && faults < 7) {
        printf("Approved.")
    } 
    else {
        printf("Disapproved.")
    }
}