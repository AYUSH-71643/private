#include <stdio.h>

int num;

int sum(int a) {
    if (a == num) {
        return 0;
    }
    return a + sum(a - 1);
}

int main() {
    int sumValue = sum(num);
    printf("%d", sumValue);
    return 0;
}