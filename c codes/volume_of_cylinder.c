
#include <stdio.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    float r, h;
    printf("Radius is: ");
    scanf("%f", &r);
    printf("Height is: ");
    scanf("%f", &h);
    printf("The volume of the Cylinder: %.2f\n", M_PI * r * r * h);
    return 0;
}