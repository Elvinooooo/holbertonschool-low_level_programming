#include "main.h"
#include <stdlib.h>
/**
* binary_to_uint -  function that converts a binary number to an unsigned int
* @b: pointing to a string of 0 and 1 chars
* Return: the converted number, or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int result = 0;
	unsigned int len = 0;

	if (b == NULL)
		return (-1);
	while (b[len])
		len++;
	for (; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = result * 2 + (b[i] - '0');
	}
	return (result);
}
