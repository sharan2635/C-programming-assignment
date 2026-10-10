/*
requirement:
    Define a Complex structure, add two complex numbers, and display the sum.
design:
    Complex - structure with real and imag members 
    a, b - input numbers
    sum - addition result 
    addComplex() - addition function 
    displayComplex() - output function
output:
    Input: 2 + 3i and 4 + 5i
    Output: Sum = 6 + 8i
code:
*/
#include <stdio.h>
typedef struct {
    double real;
    double imag;
} Complex;

Complex addComplex(Complex a, Complex b)
{
    Complex sum;
    sum.real = a.real + b.real;
    sum.imag = a.imag + b.imag;
    return sum;
}
void displayComplex(Complex c)
{
    if (c.imag < 0)
        printf("%.2f - %.2fi\\n", c.real, -c.imag);
    else
        printf("%.2f + %.2fi\\n", c.real, c.imag);
}
int main(void)
{
    Complex a, b, sum;
    printf("Enter real and imaginary parts of first number: ");
    scanf("%lf %lf", &a.real, &a.imag);
    printf("Enter real and imaginary parts of second number: ");
    scanf("%lf %lf", &b.real, &b.imag);
    sum = addComplex(a, b);
    printf("Sum = ");
    displayComplex(sum);
    return 0;
}