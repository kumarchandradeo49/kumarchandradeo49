#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    int i, length;
    int isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", string);

    length = strlen(string);

    for (i = 0; i < length / 2; i++)
    {
        if (string[i] != string[length - i - 1])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome ==0)
    {
        printf("%s is a  NOT palindrome\n", string);
    }
    else
    {
        printf("%s is a palindrome\n", string);
    }

    return 0;
}
