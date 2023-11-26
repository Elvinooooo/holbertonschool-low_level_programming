#include <stdio.h>
#include "variadic_functions.h"
/**
*print_strings -  function that prints strings, followed by a new line.
*@separator: the string to be printed between the strings
*@n:  the number of strings passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *current_string;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		current_string = va_arg(strings, char *);
		if (current_string != NULL)
			printf("%s", current_string);
		else
			printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(strings);
	printf("\n");
}
