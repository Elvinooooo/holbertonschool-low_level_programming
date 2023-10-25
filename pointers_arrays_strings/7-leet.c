#include "main.h"
/**
*leet - function that encodes a string into 1337
*@str: argument of the function
*
*Return: the character;
*/
char *leet(char *str)
{
	int i, j;
	char replacedChars[] = "AaEeOoTtLl";
	char replacingNums[] = "4433007711";

	i = 0;
	while (str[i])
	{
		j = 0;
		while (replacedChars[j])
		{
			if (str[i] == replacedChars[j])
				str[i] = replacingNums[j];
			j++;
		}
		i++;
	}
	return (str);
}
