/*
requirement:
    Convert an integer to a character string, retaining a negative sign.
design:
    num - input integer 
    temp - magnitude 
    str[] - output string
    i, j - indices 
    digit - current digit 
    negative - sign flag
output:
    Input: -123
    Output: String = -123
code:
*/
#include <stdio.h>
int main(void)
{
    int num, i = 0, j, digit, negative;
    unsigned int temp;
    char str[20];
    printf("Enter an integer: ");
    scanf("%d", &num);
    negative = (num < 0);
    temp = negative ? 0u - (unsigned int)num : (unsigned int)num;

    do {
        digit = temp % 10;
        str[i++] = (char)('0' + digit);
        temp /= 10;
    } while (temp > 0);
    if (negative) str[i++] = '-';
    str[i] = '\\0';

    for (j = 0; j < i / 2; j++) {
        char t = str[j];
        str[j] = str[i - 1 - j];
        str[i - 1 - j] = t;
    }
    printf("String = %s\\n", str);
    return 0;
}