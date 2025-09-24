#include <stdio.h>

int main() {
    int num, a = 0, b = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    return 0;
}