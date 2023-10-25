#include "main.h"
/**
*leet - function that encodes a string into 1337
*@str: argument of the function
*
*Return: the character;
*/
char *leet(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = '4';
			break;
		}
		while (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = '3';
			break;
		}
		while (str[i] == 'O' || str[i] == 'o')
		{
			str[i] = '0';
			break;
		}
		while (str[i] == 't' || str[i] == 'T')
		{
			str[i] = '7';
			break;
		}
		while (str[i] == 'l' || str[i] == 'L')
		{
			str[i] = '1';
			break;
		}
		i++;
	}
	return (str);
}
