#include "main.h"
#include <stdlib.h>

/**
* read_textfile- Read text file print to STDOUT.
* @filename: text file being read
* @letters: number of letters to be read
* Return: w- actual number of bytes read and printed
* 0 when function fails or filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t fd, bw, br;
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(fd);
return (0);
}
br = read(fd, buffer, letters);
if (br == -1)
{
free(buffer);
close(fd);
return (0);
}
bw = write(STDOUT_FILENO, buffer, br);
if (bw == -1 || bw != br)
{
free(buffer);
close(fd);
return (0);
}

free(buffer);
close(fd);
return (bw);
}
