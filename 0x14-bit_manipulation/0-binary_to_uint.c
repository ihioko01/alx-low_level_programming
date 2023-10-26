#include "main.h"
#include <stdlib.h>

/**
* binary_to_uint - function converts a binary number to an unsigned int.
* @b: pointer to a string containing a binary number
*
* Return: unsigned int with decimal value of binsry number, or 0 if error
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int n = 0;

if (b == NULL)
return (0);

while (*b)
{
if (*b != '0' && *b != '1')
return (0);
n = n * 2 + (*b - '0');
b++;
}

return (n);
}
