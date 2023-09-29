#include "main.h"

/**
* flip_bits - counts the number of bits to change
* to get from one number to another
* @n: first number
* @m: second number
*
* Return: number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int current;
unsigned long int flex = n ^ m;

for (int i = 63; i >= 0; i--)
{
count += (flex >> i) & 1;
}

return (count);
}

