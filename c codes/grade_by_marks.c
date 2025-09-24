#include <stdio.h>

int main() {
    int marks;
    printf("Enter Your Number(0-100):\n");
    scanf("%d", &marks);

    switch (marks / 10) {
        case 10:
        case 9:
            printf("Your Grade Is A-Excellent\n");
            break;
        case 8:
            printf("Your Grade Is B-Good\n");
            break;
        case 7:
            printf("Your Grade Is C-Average\n");
            break;
        case 6:
            printf("Your Grade Is D-Bad\n");
            break;
        case 5:
            printf("Your Grade Is E-Very Bad\n");
            break;
        default:
            printf("Invalid Response or You are Fail\n");
    }
    return 0;
}