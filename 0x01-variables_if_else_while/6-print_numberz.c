#include <unistd.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');

	_putchar('\n');

	return 0;
}


