/*
requirement:
    Evaluate two floating-point numbers using +, -, * or / functions.
design:
    add(), subtract(), multiply(), divide() - operation functions 
    calculate() - selector
    a, b - operands
    op - operator 
    result - calculated value
output:
    Input: 8 * 2
    Output: Result = 16.00
code:
*/
#include <stdio.h>
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return a / b; }

int calculate(double a, double b, char op, double *result)
{
    switch (op) {
        case '+': *result = add(a, b); break;
        case '-': *result = subtract(a, b); break;
        case '*': *result = multiply(a, b); break;
        case '/':
            if (b == 0) return 0;
            *result = divide(a, b);
            break;
        default: return -1;
    }
    return 1;
}
int main(void)
{
    double a, b, result;
    char op;
    int status;
    printf("Enter expression (number operator number): ");
    scanf("%lf %c %lf", &a, &op, &b);
    status = calculate(a, b, op, &result);
    if (status == 0) printf("Cannot divide by zero.\\n");
    else if (status == -1) printf("Invalid operator.\\n");
    else printf("Result = %.2f\\n", result);
    return 0;
}