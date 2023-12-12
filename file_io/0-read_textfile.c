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
	fd = open(filename, O_RDONLY);
	fd1 = read(fd, buffer, letters);
	fd2 = write(1, buffer, fd1);
	if (fd == -1 || fd1 == -1 || fd2 == -1)
	{	free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (fd2);
}
