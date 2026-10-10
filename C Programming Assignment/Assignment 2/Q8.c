/*
requirement:
    Convert a non-negative decimal number to a base from 2 through 16.
design:
    convert() - conversion function 
    num - decimal input 
    base - target base
    digits[] - stores remainders;
    rem, i - counters
output:
    Input: decimal = 255, base = 16
    Output: FF
code:
*/
#include <stdio.h>
void convert(unsigned int num, int base)
{
    char digits[] = "0123456789ABCDEF";
    char result[33];
    int i = 0, rem;
    if (num == 0) {
        printf("0\\n");
        return;
    }
    while (num > 0) {
        rem = num % base;
        result[i++] = digits[rem];
        num /= base;
    }
    while (i > 0)
        putchar(result[--i]);
    putchar('\\n');
}
int main(void)
{
    unsigned int num;
    int base;
    printf("Enter a non-negative decimal number: ");
    scanf("%u", &num);
    printf("Enter base (2-16): ");
    scanf("%d", &base);
    if (base < 2 || base > 16) {
        printf("Invalid base.\\n");
        return 0;
    }
    convert(num, base);
    return 0;
}