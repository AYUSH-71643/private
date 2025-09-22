#include <stdio.h>

int main() {
    int list[5], i, sum = 0;
    for (i = 0; i < 5; i++) {
        scanf("%d", &list[i]);
        sum = sum + list[i];
    }
    printf("%d
", sum / 5);
    return 0;
}