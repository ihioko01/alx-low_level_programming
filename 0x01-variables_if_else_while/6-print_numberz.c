/**
* _putchar - Writes a character to the standard output
* @c: The character to write
*
* Return: On success, returns the number of bytes written.
*         On error, returns -1 and sets errno appropriately.
*/
int _putchar(int c)
{
return (write(1, &c, 1));
}

/**
* main - Entry point of the program
*
* Return: Always returns 0 to indicate successful execution
*/
int main(void)
{
int i;

for (i = 0; i < 10; i++)
_putchar(i + 48); /* Add 48 to convert the integer to its ASCII representation*/

_putchar('\n');

return (0);
}

