/*
requirement:
    Check whether a string reads the same forward and backward.
design:
    str[] - input string 
    i - left index 
    j - right index 
    palindrome - result flag
output:
    Input: level
    Output: The string is a palindrome.
code:
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[200];
    int i = 0, j, palindrome = 1;
    printf("Enter a word (no spaces): ");
    scanf("%199s", str);
    j = (int)strlen(str) - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            palindrome = 0;
            break;
        }
        i++;
        j--;
    }
    if (palindrome) printf("The string is a palindrome.\\n");
    else printf("The string is not a palindrome.\\n");
    return 0;
}