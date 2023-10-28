#include "main.h"
/**
*_strstr - function that locates a substring.
*@haystack: the string where we will search
*@needle: the string containing search characters
*
*Return: a pointer to the beginning of the located substring, or
*NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (needle[i] == '\0')
		return (haystack);
	while (haystack[i])
	{
		int j = 0;

		while (haystack[i] == needle[j] && needle[j] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (&haystack[i - j]);
		i++;
	}
	return ('\0');
}
