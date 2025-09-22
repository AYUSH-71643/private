#include <stdio.h>

int main() {
    int marks;
    printf("Enter Your Number(0-100):
");
    scanf("%d", &marks);

    switch (marks / 10) {
        case 10:
        case 9:
            printf("Your Grade Is A-Excellent
");
            break;
        case 8:
            printf("Your Grade Is B-Good
");
            break;
        case 7:
            printf("Your Grade Is C-Average
");
            break;
        case 6:
            printf("Your Grade Is D-Bad
");
            break;
        case 5:
            printf("Your Grade Is E-Very Bad
");
            break;
        default:
            printf("Invalid Response or You are Fail
");
    }
    return 0;
}