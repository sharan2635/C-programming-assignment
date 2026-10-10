/*
requirement:
    Determine whether an integer is prime.
design:
    num - input number 
    i - divisor counter 
    isPrime - prime-status flag
output:
    Input: 7
    Output: 7 is prime.
code:
*/
#include <stdio.h>
int main(void)
{
    int num, i, isPrime = 1;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 2)
        isPrime = 0;
    else {
        for (i = 2; i <= num / i; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime)
        printf("%d is prime.\\n", num);
    else
        printf("%d is not prime.\\n", num);
    return 0;
}