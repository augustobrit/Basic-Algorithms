#include <stdio.h>

int main() {
    int hI, mI, sI;
    int hF, mF, sF;
    int initialSeconds, finalSeconds, deltaSeconds;
    int h, m, s;

    printf("Initial Hour: ");
    scanf("%d", &hI);

    printf("Initial Min: ");
    scanf("%d", &mI);

    printf("Initial Sec: ");
    scanf("%d", &sI);

    printf("Final Hour: ");
    scanf("%d", &hF);

    printf("Final Min: ");
    scanf("%d", &mF);

    printf("Final Sec: ");
    scanf("%d", &sF);

    initialSeconds = hI * 3600 + mI * 60 + sI;
    finalSeconds = hF * 3600 + mF * 60 + sF;
    deltaSeconds = finalSeconds - initialSeconds;

    h = deltaSeconds / 3600;
    m = (deltaSeconds % 3600) / 60; 
    s = (deltaSeconds % 60) % 60;

    printf("Delta Time: %d : %d : %d", h, m, s);
}