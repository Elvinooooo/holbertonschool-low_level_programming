#include "main.h"
/**
*_strspn - function that gets the length of a prefix substring.
*@s: the string where we will search
*@accept: the string containing search characters
*
*Return: number of bytes in the initial segment of s which consist only of
*bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int count = 0;

	while (s[i])
	{
		int j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (!accept[j])
			break;
		i++;
	}
	return (count);
}
