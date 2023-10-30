#include "main.h"
/**
*factorial - function that returns the factorial of a given number.
*@n: the given number
*
*Return: -1 if the the n is lower than 0 else the factorial
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
