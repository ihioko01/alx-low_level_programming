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
* Return: Always (0) (Success)
*/
int main(void)
{
char c;

for (c = 'z'; c >= 'a'; c--)
{
_putchar(c);
}

_putchar('\n');

return (0);
}

