#include <unistd.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */

int _putchar(int c)
{
    return write(1, &c, 1);
}

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

    return 0;
}

