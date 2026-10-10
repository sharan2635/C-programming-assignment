/*
requirement:
    Convert a string containing a positive integer into an int.
design:
    str[] - input string 
    i - character index 
    value - converted integer
output:
    Input: 1234
    Output: Integer = 1234
code:
*/
#include <stdio.h>
int main(void)
{
    char str[100];
    int i = 0, value = 0;
    printf("Enter a positive integer as a string: ");
    scanf("%99s", str);
    while (str[i] != '\\0') {
        if (str[i] < '0' || str[i] > '9') {
            printf("Invalid digit string.\\n");
            return 0;
        }
        value = value * 10 + (str[i] - '0');
        i++;
    }
    printf("Integer = %d\\n", value);
    return 0;
}