#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int count, i;
    printf("Enter how many Fibonacci numbers you want: ");
    scanf("%d", &count);
    printf("Fibonacci Series: ");
    for (i = 0; i < count; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}