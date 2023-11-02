#include "main.h"

/**
 * _islower  - checks whether a char is lowercase or uppercase.
 *
 *@c: The argument of the function to be checked
 *
 * Return: 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
