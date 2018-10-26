#include <stdio.h>

int main() {
    float dist;
    float gas;
    float avg;

    printf("Distance (Km): ");
    scanf("%f", &dist);
    
    printf("Gas (l): ");
    scanf("%f", &gas);
    
    avg = dist / gas;

    printf("Gas Consume Average: %f (Km/l)", avg);
}