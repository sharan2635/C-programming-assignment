/*
requirement:
    Count how many times each digit from 0 to 9 appears in an integer.
design:
    num - input integer 
    freq[10] - digit counts 
    digit, i - counters
output:
    Input: 12021
    Output: Digit 1: 2, Digit 2: 2, Digit 0: 1; other digits: 0
code:
*/
#include <stdio.h>
int main(void)
{
    long long num;
    int freq[10] = {0}, digit, i;
    printf("Enter an integer: ");
    scanf("%lld", &num);

    if (num < 0) num = -num;
    if (num == 0) freq[0] = 1;
    while (num > 0) {
        digit = (int)(num % 10);
        freq[digit]++;
        num /= 10;
    }
    for (i = 0; i < 10; i++)
        printf("Digit %d: %d\\n", i, freq[i]);
    return 0;
}