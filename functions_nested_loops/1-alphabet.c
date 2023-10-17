#include "main.h"

/**
 * main -  Entry Point of the program that mentions the function prototype
 *
 *Description: function prints _putchar, followed by a new line
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{

	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
