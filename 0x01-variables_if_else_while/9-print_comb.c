#include <unistd.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */

int _putchar(char c)
{
    return write(1, &c, 1);
}

int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        _putchar('0' + i);

        if (i != 9)
        {
            _putchar(',');
            _putchar(' ');
            i++;  // Increment i by 1 to skip the next iteration
        }
    }

    _putchar('\n');

    return (0);
}

