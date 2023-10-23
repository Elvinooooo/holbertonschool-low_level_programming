#include "main.h"
/**
*puts2 - Function that  that prints every other character of a string, starting
*with the first character, followed by a new line.
*@str: The char pointer argument
*/
void puts2(char *str)
{
	int len = 0;
	int i;

	while (str[len])
		len++;
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
