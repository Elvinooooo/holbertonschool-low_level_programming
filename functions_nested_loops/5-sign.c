#include "main.h"
/**
 * print_sign  - prints the sign of a number.
 *
 *@n: The argument of the function to be checked
 *
 * Return: 0 if greater than zero
 * 0 if equals to zero
 * -1 if it is smaller than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
