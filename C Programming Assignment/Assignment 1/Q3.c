/*
requirement:
    Print a centered pyramid of stars for n rows.
design:
    n - number of rows
    i - row counter 
    j - space counter 
    k - star counter
code:
*/
#include <stdio.h>

int main(void)
{
    int n, i, j, k;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (k = 1; k <= 2 * i - 1; k++)
            printf("*");
        printf("\\n");
    }
    return 0;
}