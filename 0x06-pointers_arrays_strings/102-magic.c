#include <stdio.h>

int main(void)
{
int n = 0;
int a[5];
int *p;

a[2] = 1024;
p = &n;
*(p + 2) = 98;

printf("a[2] = %d\n", *(p + 2)); /* New line of code added here */

return (0);
}
