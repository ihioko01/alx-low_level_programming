#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t _putchar(char c);

/**
* read_textfile - Reads and prints a text file to standard output.
* @filename: Name of the file to read.
* @letters: The number of letters to read and print.
*
* Return: The actual number of letters read and printed. 0 on failure.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t r, w;
char *buffer;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = malloc(letters);
if (buffer == NULL)
{
close(fd);
return (0);
}

r = read(fd, buffer, letters);
if (r == -1)
{
close(fd);
free(buffer);
return (0);
}

w = 0;
while (w < r)
{
if (_putchar(buffer[w]) == -1)
{
close(fd);
free(buffer);
return (0);
}
w++;
}

close(fd);
free(buffer);

return (w);
}

