#include "main.h"
/**
*_strpbrk - function that searches a string for any of a set of bytes.
*@s: the string where we will search
*@accept: the string containing search characters
*
*Return: a pointer to the byte in s that matches one of the bytes in accept,
*or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i])
	{
		int j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
