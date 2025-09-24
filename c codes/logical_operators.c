#include <stdio.h>

int main() {
    int a = 2;
    int b = 15;
    int c = 4;
    if (a < 6 && a == 6 || a > 4 && a >= 4) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    if (b == 2 && b > 1 && b >= 1) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    if (!(c < 14)) {
        printf("True\n");
    } else {
        printf("True\n");
    }
    return 0;
}