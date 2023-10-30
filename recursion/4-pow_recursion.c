#include "main.h"
/**
*_pow_recursion -  function that returns the value of first
*argument(x) raised to the power of the second argument(y)
*@x: the base
*@y: the power
*
*Return: -1 if y is lower than 0 else the value
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
