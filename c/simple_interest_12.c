#include <stdio.h>

int main() {
    float P, R, T;
    printf("Principal: ");
    scanf("%f", &P);
    printf("Rate: ");
    scanf("%f", &R);
    printf("Time: ");
    scanf("%f", &T);
    printf("Simple Interest: %f
", P * R * T / 100.0);
    return 0;
}
