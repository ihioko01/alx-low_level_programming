#include"main.h"

/**
* get_bit - prog returns the value of a bit at a given index.
* @n: number to check bits in
* @index: index at which to check bit
*
* Return: value of the bit, or -1 if there is an error
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
/* Error: index out of range */
}

return ((n >> index) & 1);
/* Extract and return the bit at the specified index */
}
