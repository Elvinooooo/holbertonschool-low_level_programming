#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_and_exit - Print an error message to stderr and exit with a code
 * @message: The error message format string
 * @source: The source of the error (void pointer to handle any type)
 * @exit_code: The exit code
 */
void print_and_exit(char *message, void *source, int exit_code)
{
	dprintf(STDERR_FILENO, message, source);
	exit(exit_code);
}

/**
 *main - function that copies content from one file to another
 *@argc: number of arguments
 *@argv: the array of arguments
 *Return: 0 on success, or exit on failure
 */
int main(int argc, char *argv[])
{
	int open1, read1, open2, write1;
	char buffer[1024];

	if (argc != 3)
		print_and_exit("Usage: cp file_from file_to\n", NULL, 97);
	open1 = open(argv[1], O_RDONLY);
	if (open1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	open2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (open2 == -1)
	{
		close(open1);
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	while ((read1 = read(open1, buffer, 1024)) > 0)
	{
		write1 = write(open2, buffer, read1);
		if (write1 == -1)
		{
			close(open1);
			close(open2);
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}
	if (read1 == -1)
	{
		close(open1);
		close(open2);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(open1) == -1 || close(open2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(100);
	}
	return (0);
}
