#include <stdio.h>

int main() {
    int sex = -1;
    float height;
    
    printf("Type your sex 0 - male | 1 - female: ");
    scanf("%d", &sex);

    printf("Type your height: ");
    scanf("%f", &height);

    float bmi;

    if (sex == 0) {
        bmi = (72.7f*height)-58;
    }
    else if (sex == 1) {
        bmi = (62.1f*height)-44.7f;
    } 
    else {
        printf("Invalid Sex.");
        return 0;
    }

    printf("Your BMI: %f", bmi);
}