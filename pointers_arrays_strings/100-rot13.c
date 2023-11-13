#include <stdio.h>
/**
*rot13 -  function that encodes a string using rot13
*@str: the string that should be encoded
*Return: The encoded string
*/
char *rot13(char *str)
{
	int i = 0;

	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			char base = (str[i] >= 'a') * ('a' - 1) + (str[i] < 'a') * ('A' - 1) + 1;

			str[i] = (((str[i] - base + 13) % 26) + base);
		}
		i++;
	}
	return (str);
}
