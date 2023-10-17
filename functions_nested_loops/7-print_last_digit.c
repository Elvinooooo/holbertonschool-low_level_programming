#include "main.h"
/**
 * print_last_digit  - prints the last digit of a number...
 *
 *@a: The argument of the function to be checked
 *
 * Return: the value of the last digit
 */

int print_last_digit(int a)
{
	int b = a % 10;

	if (b < 0)
		b = -b;
	_putchar('0' + b);
	return (b);
}
