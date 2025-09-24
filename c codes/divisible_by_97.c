#include <stdio.h>

int main() {
    int a;
    printf("Enter Your Number: ");
    scanf("%d", &a);
    if (a % 97 == 0) {
        printf("It is Divisible by 97\n");
    } else {
        printf("It is Not Divisible by 97\n");
    }
    return 0;
}