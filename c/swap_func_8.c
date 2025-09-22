#include <stdio.h>

void swap(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main() {
    int x = 10, y = 20;
    printf("Before Swap: %d %d
", x, y);
    swap(&x, &y);
    printf("After Swap: %d %d
", x, y);
    return 0;
}