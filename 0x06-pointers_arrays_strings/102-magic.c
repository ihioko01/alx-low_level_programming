#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
int *p;

*(p + 5) = 98; /* Set the value of a[2] directly using pointer arithmetic */
p = &n;

/*
* You are not allowed to use a
* You are not allowed to modify p
* Only one statement
* You are not allowed to code anything else than this line of code
*/

printf("a[2] = %d\n", *(p + 5)); /* Print the value of a[2] */
return (0);
}
