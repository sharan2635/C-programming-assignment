/*
requirement:
    Replace each run of multiple spaces in a sentence with one space.
design:
    str[] - input sentence 
    i - read index 
    j - write index
output:
    Input: C    programming   is fun
    Output: C programming is fun
code:
*/
#include <stdio.h>
int main(void)
{
    char str[500];
    int i = 0, j = 0;
    printf("Enter a sentence: ");
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;
    while (str[i] == ' ') i++;
    while (str[i] != '\\0') {
        if (str[i] != ' ' || (j > 0 && str[j - 1] != ' '))
            str[j++] = str[i];
        i++;
    }
    if (j > 0 && str[j - 1] == ' ') j--;
    str[j] = '\\0';
    printf("Updated sentence: %s", str);
    return 0;
}