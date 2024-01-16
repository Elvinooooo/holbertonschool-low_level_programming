#include "main.h"
/**
*_atoi -  function that convert a string to an integer.
*@s: the string to be converted to the integer
*
*Return: The array
*/
int _atoi(char *s)
{
	unsigned int result = 0;
	int i = 0;
	int negative = 1;

	for (; s[i]; i++)
	{
		if (s[i] == '-')
			negative *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
			result = (result * 10) + (s[i] - '0');
		else if (result  > 0)
			break;
	}
	return (result * negative);
}
