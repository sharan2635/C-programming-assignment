/*
requirement:
    Check whether an entered integer is even or odd.
design:
    num - integer entered by the user.
output:
    Input: 7
    Output: 7 is odd.
code:
*/
#include <stdio.h>
int main(void)
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d is even.\\n", num);
    else
        printf("%d is odd.\\n", num);
    return 0;
}