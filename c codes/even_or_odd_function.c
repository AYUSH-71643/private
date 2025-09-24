#include <stdio.h>

void add(int a) {
    if (a % 2 == 0) {
        printf("Even");
    } else {
        printf("Odd");
    }
}

int main() {
    int a;
    scanf("%d", &a);
    add(a);
    return 0;
}