#include <unistd.h>

/**
* _putchar - Writes a character to the standard output (stdout)
* @c: The character to be written
*
* Return: On success, 1 is returned. On error, -1 is returned,
*         and errno is set appropriately.
*/
int _putchar(int c)
{
return (write(1, &c, 1));
}

/**
* main - Entry point of the program
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num;

for (num = 0; num < 10; num++)
{
_putchar(num + '0');

if (num != 9)
{
_putchar(',');
_putchar(' ');
}
}

_putchar('\n');

return (0);
}
