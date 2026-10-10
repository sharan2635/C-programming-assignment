/*
requirement:
    Find the GCD of two positive integers using recursion.
design:
    gcd() - recursive function 
    a, b - input numbers
output:
    Input: 24 18
    Output: GCD = 6
code:
*/
#include <stdio.h>
int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}
int main(void)
{
    int a, b;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    if (a <= 0 || b <= 0) {
        printf("Both numbers must be positive.\\n");
        return 0;
    }
    printf("GCD = %d\\n", gcd(a, b));
    return 0;
}