#include "main.h"

/**
* print_binary - Prints the binary representation of a number.
* @n: The number to print in binary.
*/
void print_binary(unsigned long int n)
{
int outflag = 0;

if (n == 0)
{
_putchar('0');
return;
}

for (unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
mask > 0;
mask >>= 1)
{
if (n & mask || outflag)
{
_putchar((n & mask) ? '1' : '0');
outflag = 1;
}
}
}
