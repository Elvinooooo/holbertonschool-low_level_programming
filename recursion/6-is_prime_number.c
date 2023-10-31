#include "main.h"
/**
*_is_prime_numbereturns 1 if the input integer is a prime number, otherwise return 0.
*@n: the given number
*
*Return: 1 if n is prime, 0 otherwise
*/
int is_prime_number(int n)
{
	if (n <= 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (squareRoot(n, 1));
}
