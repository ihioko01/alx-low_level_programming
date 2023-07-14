#include <unistd.h>

/**
* _putchar - Writes a character to the standard output (stdout)
* @c: The character to be written
*
* Return: On success, 1 is returned. On error, -1 is returned,
*         and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

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