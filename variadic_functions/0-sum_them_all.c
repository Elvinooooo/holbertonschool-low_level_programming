#include <stdarg.h>
#include "variadic_functions.h"
/**
*sum_them_all - function tht returns the sum of all its parameters
*@n: the number of parameters of the function
*Return: the sum o all the unsigned integer parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;
	va_list arguments;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arguments, unsigned int);
	va_end(arguments);
	return (sum);
}
