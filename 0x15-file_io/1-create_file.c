#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
* create_file - Creates a file with the specified permissions
* and writes text content to it.
* @filename: The name of the file to create.
* @text_content: A NULL-terminated string to write to the file.
*
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
int fd, len, w;

if (filename == NULL)
return (-1);

if (text_content == NULL)
text_content = "";

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
return (-1);

len = 0;
while (text_content[len] != '\0')
len++;

w = write(fd, text_content, len);
if (w == -1)
{
close(fd);
return (-1);
}

close(fd);

return (1);
}
