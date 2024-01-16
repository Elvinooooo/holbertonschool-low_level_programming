#include "main.h"
/**
*_puts - Function that prints a string, followed by a new line, to stdout
*@str: The char pointer argument
*
*/
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
