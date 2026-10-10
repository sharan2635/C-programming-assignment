/*
requirement:
    Set bit index 2, clear bit index 5, and toggle bit index 0 of an unsigned char.
design:
    reg - original 8-bit register
    result - modified register.
output:
    Example: Input register = 0
             Modified register = 5
code:
*/
#include <stdio.h>

int main(void)
{
    unsigned char reg;

    printf("Enter register value (0-255): ");
    scanf("%hhu", &reg);

    reg = reg | (1u << 2);    
    reg = reg & ~(1u << 5);   
    reg = reg ^ (1u << 0);    

    printf("Modified register value = %u\\n", (unsigned int)reg);
    return 0;
}