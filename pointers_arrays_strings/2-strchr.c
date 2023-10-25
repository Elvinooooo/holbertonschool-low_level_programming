#include "main.h"
/**
*_strchr - function that locates a character in a string.
*@s: the string where we will locate the character
*@c: the character to be located
*
*Return: NULL if the character is not found. first occurrence of the
*character c in the string s
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return ('\0');
}
