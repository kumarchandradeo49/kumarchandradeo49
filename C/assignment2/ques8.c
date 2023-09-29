#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    switch (num > 0 ? 1 : (num < 0 ? -1 : 0)) {
        case 1:
            printf("%d is positive.\n", num);
            break;
        case -1:
            printf("%d is negative.\n", num);
            break;
        default:
            printf("%d is zero.\n", num);
            break;
    }

    return 0;
}
