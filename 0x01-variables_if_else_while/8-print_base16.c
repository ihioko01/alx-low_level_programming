#include <stdio.h>

/**
* main - Entry point of the program
*
* Return: Always 0
*/
int main(void)
{
char c;

for (c = '0'; c <= '9'; c++)
{
_putchar(c);
}

for (c = 'a'; c <= 'f'; c++)
{
_putchar(c);
}

_putchar('\n');

return (0);
}
