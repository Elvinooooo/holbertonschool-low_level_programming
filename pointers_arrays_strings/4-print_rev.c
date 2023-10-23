#include "main.h"
/**
*print_rev - Function that prints a string, in reverse followed by a new line
*@s: The char pointer argument
*
*/
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len])
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
