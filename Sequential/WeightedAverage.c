#include <stdio.h>

int main() {
    float a;
    float b;
    float avgA = 1.0;
    float avgB = 3.0;

    printf("Type your A grade: ");
    scanf("%f", &a);

    printf("Type your B grade: ");
    scanf("%f", &b);

    float average = (a * avgA + b *avgB) / (avgA + avgB);

    printf("Your weighted average is: %f", average);
}