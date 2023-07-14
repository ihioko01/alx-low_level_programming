#include <unistd.h>

/**
* main - Entry point of the program
*
* Return: Always 0
*/
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
char digit = i + '0';
write(1, &digit, 1);
}
write(1, "\n", 1);

return (0);
}

