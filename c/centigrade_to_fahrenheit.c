#include <stdio.h>

int main() {
    float a = 9.0 / 5.0;
    float b = 32;
    float centigrade;
    printf("Centigrade is: ");
    scanf("%f", &centigrade);
    printf("%.2f", centigrade * a + b);
    return 0;
}