#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
/**
* read_textfile -  Reads text file and
* prints it to the POSIX standard output
* @filename: Points to the filename
* @letters: number of letters it reads
* and print.
* Return: number of letters it reads
* and prints return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
int write_ret;
ssize_t read_ret;
char *buffer;
if (filename == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
buffer = (char *)malloc(sizeof(char) * letters);
if (buffer == NULL)
{
return (0);
}
read_ret = read(fd, buffer, letters);
if (read_ret == -1)
{
return (0);
}
close(fd);
write_ret = write(STDOUT_FILENO, buffer, read_ret);
free(buffer);
if (write_ret != read_ret)
return (0);
return (read_ret);
}
