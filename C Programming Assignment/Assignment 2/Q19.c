/*
requirement:
    Replace n bits in the first number with n bits from the second number.
design:
    a, b - input numbers 
    pos - starting position
    n - bit count
    mask - selected bit mask 
    width - unsigned integer bit width
output:
    Input: a=15, b=2, position=1, n=2
    Output: Result = 13
code:
*/
#include <stdio.h>
int main(void)
{
    unsigned int a, b, mask, fieldMask, width = (unsigned int)(sizeof(unsigned int) * 8);
    int pos, n;
    printf("Enter first number, second number, position, and bit count: ");
    scanf("%u %u %d %d", &a, &b, &pos, &n);
    if (pos < 0 || n < 1 || (unsigned int)n > width ||
        (unsigned int)pos + (unsigned int)n > width) {
        printf("Invalid bit range.\\n");
        return 0;
    }
    fieldMask = (n == (int)width) ? ~0u : ((1u << n) - 1u);
    mask = fieldMask << pos;
    a = (a & ~mask) | ((b & fieldMask) << pos);
    printf("Result = %u\\n", a);
    return 0;
}