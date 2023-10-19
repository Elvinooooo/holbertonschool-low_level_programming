#include "main.h"
/**
*_isdigit - Checks for a digit between 0-9
*@c: the argument of the function to check
*
*Return: 0 if the character is uppercase 1 if is lowercase
*/

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
