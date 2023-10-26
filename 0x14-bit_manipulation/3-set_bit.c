#include "main.h"

/**
* set_bit - prog sets the value of a bit to 1 at a given index.
* @n: number to set
* @index: index at which to set bit
*
* Return: 1 if success, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
/* index out of range */
}

unsigned long int setbit = 1UL << index;
*n |= setbit;

return (1);
}
