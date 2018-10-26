#include <stdio.h>

int main() {
    int input;
    int h;
    int m;
    int s;

    printf("Seconds: ");
    scanf("%d", &input);
    
    h = input / 3600;
    m = (input % 3600) / 60;
    s = (input % 3600) % 60;

    printf("Time: %d : %d : %d", h, m, s);
}