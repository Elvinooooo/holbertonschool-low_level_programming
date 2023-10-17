#include "main.h"

/**
 * main -  Entry Point of the program that mentions the function prototype
 *
 *Description: function prints _putchar, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
