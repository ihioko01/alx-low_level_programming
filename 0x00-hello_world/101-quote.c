#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1
 */
int main(void)
{
	ssize_t len = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n") - 1;
	ssize_t ret = write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", len);

	if (ret != len)
        return (1);

	return (1);
}

