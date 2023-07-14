#include <unistd.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}

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

