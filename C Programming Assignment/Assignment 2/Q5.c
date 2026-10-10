/*
requirement:
    Check whether a positive integer equals the sum of its proper divisors.
design:
    isPerfect() - tests the number 
    num - input 
    i - divisor counter 
    sum - divisor sum
output:
    Input: 28
    Output: 28 is a perfect number.
code:
*/
#include <stdio.h>
int isPerfect(int num)
{
    int i, sum = 0;
    for (i = 1; i <= num / 2; i++)
        if (num % i == 0) sum += i;
    return num > 1 && sum == num;
}
int main(void)
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (isPerfect(num))
        printf("%d is a perfect number.\\n", num);
    else
        printf("%d is not a perfect number.\\n", num);
    return 0;
}