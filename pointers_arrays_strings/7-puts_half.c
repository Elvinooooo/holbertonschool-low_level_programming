#include "main.h"
/**
*puts_half - Function that prints half of a string, followed by a new line.
* should print the second half of the string
*@str: The char pointer argument
*/
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len])
		len++;
	for (i = len / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
