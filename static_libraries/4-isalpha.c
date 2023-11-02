#include "main.h"

/**
 * _isalpha  - checks whether a char is a letter or not.
 *
 *@c: The argument of the function to be checked
 *
 * Return: 1 if it is letter 0 if it is not.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
