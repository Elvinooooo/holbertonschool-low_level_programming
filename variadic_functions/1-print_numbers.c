#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
*print_numbers - function that prints numbers followed by a new line
*@separator:the string to be printed between numbers
*@n:  the number of integers passed to the function
*Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arguments, unsigned int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(arguments);
	printf("\n");
}
