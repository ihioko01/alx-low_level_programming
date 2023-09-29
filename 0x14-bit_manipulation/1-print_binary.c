#include "main.h"
#include <stdio.h>

/**
* print_binary - prints the binary equivalent of a decimal number
* @n: number to print in binary
*/
void print_binary(unsigned long int n)
{
unsigned long int current;
int i, flag = 0;
/*Initialize a flag to track when to start printing binary digits */
for (i = 63; i >= 0; i--)
{
current = n >> i;

if (current & 1)
{
_putchar('1');
flag++;
}
else if (flag)
_putchar('0');
}
if (!flag)
_putchar('0');
}



