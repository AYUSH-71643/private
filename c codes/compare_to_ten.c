#include <stdio.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a < 10) {
        printf("A is less than 10\n");
    } else if (a == 10) {
        printf("A is equal to 10\n");
    } else if (a > 10) {
        printf("A is greater than 10\n");
    }
    return 0;
}