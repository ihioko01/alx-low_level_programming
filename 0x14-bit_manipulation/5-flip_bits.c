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
unsigned long int diff = n ^ m;
unsigned int flipbit = 0;

while (diff > 0)
{
flipbit += diff & 1;
diff >>= 1;
}

return (flipbit);
}
