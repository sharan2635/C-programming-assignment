/*
requirement:
    Calculate the factorial of a non-negative integer.
design:
    n - input number 
    i - loop counter 
    factorial - product
output:
    Input: 5
    Output: Factorial = 120
code:
*/
#include <stdio.h>
int main(void)
{
    int n, i;
    unsigned long long factorial = 1;
    printf("Enter a non-negative integer (0-20): ");
    scanf("%d", &n);
    if (n < 0 || n > 20) {
        printf("Input out of supported range.\\n");
        return 0;
    }
    for (i = 1; i <= n; i++)
        factorial *= i;
    printf("Factorial = %llu\\n", factorial);
    return 0;
}