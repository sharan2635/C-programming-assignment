/*
requirement:
    Print the Fibonacci series for the requested number of terms.
design:
    n - term count 
    i - counter 
    first, second - current terms 
    next - next term.
output:
    Input: 6
    Output: 0 1 1 2 3 5
code:
*/
#include <stdio.h>
int main(void)
{
    int n, i;
    long long first = 0, second = 1, next;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Enter a positive number of terms.\\n");
        return 0;
    }
    for (i = 1; i <= n; i++) {
        printf("%lld", first);
        if (i < n) printf(" ");
        next = first + second;
        first = second;
        second = next;
    }
    printf("\\n");
    return 0;
}