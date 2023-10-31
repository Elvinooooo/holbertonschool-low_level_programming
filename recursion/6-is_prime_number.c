#include "main.h"
/**
*isPrimeChecker - function that checks whether a number is prime or not
*@n:number to be checked
*@i:divisor
*
*Return: 1 if it is Prime 0 if it is not prime number
*/
int isPrimeChecker(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	return (isPrimeChecker(n, i + 1));
}

/**
*is_prime_number - function that returns 1 if the input integer is a
*prime number, otherwise return 0.
*@n: the given number
*
*Return: 1 if n is prime, 0 otherwise
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (isPrimeChecker(n, 2));
}
