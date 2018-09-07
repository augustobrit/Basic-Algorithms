#include <stdio.h>
#include <math.h>

int main(void)
{
    int power = 0;
    
    for(int i = 2; i <= 5; i++)
    {
        printf("Power of: %d \n \n", i);
        power = 1;
        for(int j = 1; j <= 10; j++)
        {
            power = i * power;
            printf("%d ^ %d = %d \n ", i, j, power);
        }
        printf("\n");
    }
    return 0;
}