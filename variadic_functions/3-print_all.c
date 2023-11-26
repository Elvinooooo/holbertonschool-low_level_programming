#include "variadic_functions.h"
#include <stdio.h>
/**
*print_all -  function that prints anything.
*@format: a list of types of arguments passed to the function
*Return: nothing
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list arguments;
	const char *separator = "";
	char *str;

	va_start(arguments, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%s", separator, va_arg(arguments, char *));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(arguments, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(arguments, double));
				break;
			case 's':
				str = va_arg(arguments, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(arguments);
}
