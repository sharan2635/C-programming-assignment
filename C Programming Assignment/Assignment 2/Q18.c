/*
requirement:
    Extract n bits beginning at a specified bit position.
design:
    num - input unsigned number 
    pos - starting position 
    n - bit count 
    result - extracted bits
output:
    Input: number=44, position=2, n=3
    Output: Extracted value = 3
code:
*/
#include <stdio.h>
int main(void)
{
    unsigned int num, result, mask;
    int pos, n, width = (int)(sizeof(num) * 8);
    printf("Enter number, starting bit position, and bit count: ");
    scanf("%u %d %d", &num, &pos, &n);
    if (pos < 0 || n < 1 || n > width || pos + n > width) {
        printf("Invalid bit range.\\n");
        return 0;
    }
    mask = (n == width) ? ~0u : ((1u << n) - 1u);
    result = (num >> pos) & mask;
    printf("Extracted value = %u\\n", result);
    return 0;
}