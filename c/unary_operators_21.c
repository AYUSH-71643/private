#include <stdio.h>

int main() {
    int a = 3;
    while (a < 10) {
        printf("%d
", a);
        a++;
    }
    int b = 10;
    while (b > 1) {
        printf("%d
", b);
        b--;
    }
    int d = 10;
    d++;
    printf("d=%d
", d);
    int e = 10;
    e--;
    printf("f=%d
", e);
    return 0;
}