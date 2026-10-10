/*
requirement:
    Reverse the characters in a string using a loop.
design:
    str[] - input string
    i, j - indices
    temp - swap variable
output:
    Input: hello
    Output: olleh
code:
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[200], temp;
    int i, j;
    printf("Enter a word (no spaces): ");
    scanf("%199s", str);
    i = 0;
    j = (int)strlen(str) - 1;
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("Reversed string = %s\\n", str);
    return 0;
}