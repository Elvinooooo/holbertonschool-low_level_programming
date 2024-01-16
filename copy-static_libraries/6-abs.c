#include "main.h"
/**
 * _abs  - computes the absolute value of an integer..
 *
 *@a: The argument of the function to be checked
 *
 * Return: itself if the value is greater than zero
 * the negative of itself if the value is smaller than zero
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else
		return (a);
}
