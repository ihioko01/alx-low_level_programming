#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
* append_text_to_file - Appends text at the end of a file.
* @filename: The name of the file.
* @text_content: The NULL-terminated string to add at the end of the file.
*
* Return: 1 on success and -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int file, w = 1;

if (filename == NULL)
return (-1);

file = open(filename, O_WRONLY | O_APPEND);

if (file == -1)
return (-1);

if (text_content != NULL)
{
while (text_content[w - 1] != '\0')
{
if (write(file, text_content + w - 1, 1) == -1)
{
w = -1;
break;
}
w++;
}
}

close(file);
return (w == -1 ? -1 : 1);
}
