#include "main.h"

/**
* print_alphabet_x10 - function prints albhabet letters 10 times
* followed by a new line
*
* Return: void
*/

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		 _putchar('\n');
	}

}
