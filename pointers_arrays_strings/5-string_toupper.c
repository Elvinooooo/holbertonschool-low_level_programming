#include "main.h"
/**
*string_toupper -that changes all lowercase letters of a string to uppercase
*@str: string argument
*
*Return: the converted to uppercase string
*/
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] -= 32;
		i++;
	}
	return (str);
}
