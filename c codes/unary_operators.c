#include <stdio.h>

int main() {
    int a = 3;
    while (a < 10) {
        printf("%d\n", a);
        a++;
    }
    int b = 10;
    while (b > 1) {
        printf("%d\n", b);
        b--;
    }
    int d = 10;
    d++;
    printf("d=%d\n", d);
    int e = 10;
    e--;
    printf("f=%d\n", e);
    return 0;
}