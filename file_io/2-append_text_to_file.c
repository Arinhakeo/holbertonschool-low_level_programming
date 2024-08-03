#include <fcntl.h>
#include <unistd.h>
/**
* append_text_to_file - Appends text to the end of a file.
* @filename: Name of the file.
* @text_content: NULL-terminated string to append to the file.
*
* Return: 1 on success, -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, len = 0, written;

if (!filename)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

if (text_content)
{
while (text_content[len])
len++;

written = write(fd, text_content, len);
if (written == -1)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
