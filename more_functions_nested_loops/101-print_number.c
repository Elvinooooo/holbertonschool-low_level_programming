#include "main.h"
/**
*print_number -Print the integers with the help of _putchar function
*@n: parameter of the function to be printed
*/

void print_number(int n)
{
	int unsigned int number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}
	if (number / 10)
		print_number(number / 10);
	_putchar((number % 10) + '0');
}
