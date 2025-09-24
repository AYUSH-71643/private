#include <stdio.h>

int main() {
    int arr[5] = {20, 100, 45, 90, 102};
    int search = 90;
    int i;
    for (i = 0; i < 5; i++) {
        if (arr[i] == search) {
            printf("Element is found at index: %d\n", i);
            break;
        }
    }
    if (i == 5) {
        printf("Element not found\n");
    }
    return 0;
}