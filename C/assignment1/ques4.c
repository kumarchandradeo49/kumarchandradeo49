#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (num > 0) 
    {
        sum=sum+num % 10; // add the rightmost digit to the sum
        num=num/10; // remove the rightmost digit
    }

    printf("The sum of the individual digits is %d.\n", sum);

    return 0;
}
