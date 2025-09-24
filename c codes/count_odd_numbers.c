#include <stdio.h>

int odd(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            count = count + 1;
        }
    }
    return count;
}

int main() {
    int arr[8];
    int size = 8;
    int count = odd(arr, size);
    printf("count = %d\n", count);
    return 0;
}