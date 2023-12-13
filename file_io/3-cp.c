#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_error_and_exit - Print an error message to stderr and exit with a code
 * @code: The exit code
 * @message: The error message format string
 * @arg: The argument to be included in the error message
 */
void print_error_and_exit(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
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
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	open1 = open(argv[1], O_RDONLY);
	if (open1 == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);
	read1 = read(open1, buffer, 1024);
	open2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (open2 == -1)
	{
		close(open1);
		print_error_and_exit(99, "Error: Can't write to file %s\n", argv[2]);
	}
	while (read1 > 0)
	{
		write1 = write(open2, buffer, read1);
		if (write1 == -1)
		{
			close(open1);
			close(open2);
			print_error_and_exit(99, "Error: Can't write to file %s\n", argv[2]);
		}
	}
	if (read1 == -1)
	{
		close(open1);
		close(open2);
		print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}
	if (close(open1) == -1)
		print_error_and_exit(100, "Error: Can't close fd %d\n", open1);
	if (close(open2) == -1)
		print_error_and_exit(100, "Error: Can't close fd %d\n", open2);
	return (0);
}
