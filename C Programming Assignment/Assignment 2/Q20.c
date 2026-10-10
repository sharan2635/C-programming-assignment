/*
requirement:
    Exchange n consecutive bits at the same position in two integers.
design:
    a, b - input numbers 
    pos - starting position 
    n - bit count
    x - differing selected bits 
    mask - bit selection mask
output:
    Input: a=10, b=12, position=2, n=2
    Output: a = 14, b = 8
code:
*/
#include <stdio.h>
int main(void)
{
    unsigned int a, b, mask, x, fieldMask;
    int pos, n, width = (int)(sizeof(unsigned int) * 8);
    printf("Enter two numbers, starting position, and bit count: ");
    scanf("%u %u %d %d", &a, &b, &pos, &n);
    if (pos < 0 || n < 1 || n > width || pos + n > width) {
        printf("Invalid bit range.\\n");
        return 0;
    }
    fieldMask = (n == width) ? ~0u : ((1u << n) - 1u);
    mask = fieldMask << pos;
    x = (a ^ b) & mask;
    a ^= x;
    b ^= x;
    printf("a = %u\\nb = %u\\n", a, b);
    return 0;
}