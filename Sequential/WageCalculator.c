#include <stdio.h>

int main()
{
    float wage;
    float wageToGet;
    
    printf("Type the base wage: ");
    scanf("%f", &wage);

    wageToGet = wage + (wage * 0.05) - (wage * 0.07);
    
    printf("Wage: %f", wageToGet);

    return 0;
}
