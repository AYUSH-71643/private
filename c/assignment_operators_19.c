#include <stdio.h>

int main() {
    int a = 5;
    int b = 3;
    a = b;
    printf("%d
", a);
    a += b;
    printf("%d
", a);
    a -= b;
    printf("%d
", a);
    a *= b;
    printf("%d
", a);
    a /= b;
    printf("%d
", a);
    a %= b;
    printf("%d
", a);
    a &= b;
    printf("%d
", a);
    a |= b;
    printf("%d
", a);
    a ^= b;
    printf("%d
", a);
    a <<= b;
    printf("%d
", a);
    a >>= b;
    printf("%d
", a);
    return 0;
}