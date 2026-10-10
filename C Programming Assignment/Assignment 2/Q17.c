/*
requirement:
    Toggle n bits starting at a specified bit position.
design:
    num - input unsigned number 
    pos - starting bit 
    n - number of bits
    mask - mask used to toggle the selected bits
output:
    Input: number=10, position=1, n=2
    Output: Result = 12
code:
*/
#include <stdio.h>
int main(void)
{
    unsigned int num, mask;
    int pos, n;
    printf("Enter number, starting bit position, and bit count: ");
    scanf("%u %d %d", &num, &pos, &n);
    if (pos < 0 || n < 1 || pos + n > (int)(sizeof(num) * 8)) {
        printf("Invalid bit range.\\n");
        return 0;
    }
    mask = ((1u << n) - 1u) << pos;
    num ^= mask;
    printf("Result = %u\\n", num);
    return 0;
}