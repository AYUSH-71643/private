#include <stdio.h>

int main() {
    int a = 2;
    int b = 4;
    int c = 6;
    int d = 5;

    if (a == c) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    if (a <= c) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    if (a < b) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    if (a > b) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    if (b >= c) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    if (b <= c) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}