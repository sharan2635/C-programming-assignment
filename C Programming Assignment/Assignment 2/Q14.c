/*
requirement:
    Check whether a sentence contains every letter from A to Z.
design:
    str[] - input sentence 
    seen[26] - letter flags 
    i, count - counters
    ch - current character
output:
    Input: The quick brown fox jumps over the lazy dog
    Output: The sentence is a pangram.
code:
*/
#include <stdio.h>
int main(void)
{
    char str[500], ch;
    int seen[26] = {0}, i, count = 0;
    printf("Enter a sentence: ");
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;
    for (i = 0; str[i] != '\\0'; i++) {
        ch = str[i];
        if (ch >= 'A' && ch <= 'Z') ch = (char)(ch - 'A' + 'a');
        if (ch >= 'a' && ch <= 'z') seen[ch - 'a'] = 1;
    }
    for (i = 0; i < 26; i++) count += seen[i];
    if (count == 26) printf("The sentence is a pangram.\\n");
    else printf("The sentence is not a pangram.\\n");
    return 0;
}