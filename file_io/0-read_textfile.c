#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
* read_textfile - Reads a text file and prints it to the POSIX standard output
* @filename: Name of the file to read
* @letters: Number of letters it should read and print
*
* Return: The actual number of letters it could read and print,
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t n_read = 0;
char c;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

while (letters > 0 && read(fd, &c, 1) == 1)
{
if (write(STDOUT_FILENO, &c, 1) != 1)
{
close(fd);
return (0);
}
n_read++;
letters--;
}

close(fd);
return (n_read);
}
