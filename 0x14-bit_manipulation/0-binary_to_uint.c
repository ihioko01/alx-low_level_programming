#include "main.h"
#include <stddef.h>

/**
* binary_to_uint - Converts a binary number to an unsigned int.
* @b: A pointer to a string containing '0' and '1' characters.
*
* Return: The converted unsigned int, or 0 if:
* b is NULL,
* There is one or more chars in the string b that are not '0' or '1'.
*/
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int dec_val = 0;

if (b == NULL)
return (0);

for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
dec_val = 2 * dec_val + (b[i] - '0');
}

return (dec_val);
}
