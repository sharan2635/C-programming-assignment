/*
requirement:
    Convert uppercase letters in a string to lowercase; leave other characters unchanged.
design:
    str[] - input string 
    i - character index
output:
    Input: Hello C
    Output: hello c
code:
*/
#include <stdio.h>
int main(void)
{
    char str[300];
    int i;
    printf("Enter a line: ");
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;
    for (i = 0; str[i] != '\\0'; i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = (char)(str[i] + ('a' - 'A'));
    printf("Lowercase string: %s", str);
    return 0;
}