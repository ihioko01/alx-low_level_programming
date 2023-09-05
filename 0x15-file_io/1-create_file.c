#include "main.h"
#include <stdlib.h>

/**
* create_file - Create a file and write a text content on it.
* @filename: The name of the file to be created.
* @text_content: A null terminated string to be written to the fie.
* Return: 1 on sucess and -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int fd, tc, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len] != '\0'; len++;)
}
fd = open(filename, 0_CREAT | 0_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
tc = write(fd, text_content, len);
if (fd == -1 || tc == -1)
return (-1);

close(fd);
return (1);
}
