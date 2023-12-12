#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *read_textfile - function that reads a text file and prints
 *it to the POSIX standard output
 *@filename: the name of the file to be read
 *@letters: the number of letters it should read and print
 *Return:  the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, fd1, fd2;

	if (filename == NULL)
		return (0);
	buffer =  malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	fd1 = read(fd, buffer, letters);
	if (fd1 == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	fd2 = write(STDOUT_FILENO, buffer, fd1);
	if (fd2 == -1 || fd2 != fd1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (fd1);
}
