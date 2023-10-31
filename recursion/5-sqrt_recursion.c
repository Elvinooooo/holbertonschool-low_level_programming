#include "main.h"
/**
*square root -  function  that function to find the natural square root.
*@n: the number that will be the square root
*@i: the current value where should start finding
*Return: -1 if n does not have a natural square root
*/
int squareRoot(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (squareRoot(n, i + 1));
}
/**
*_sqrt_recursion -  function  that returns the natural square root of a number.
*@n: the given number
*
*Return: -1 if n does not have a natural square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (squareRoot(n, 1));
}
