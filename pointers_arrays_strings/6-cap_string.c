#include "main.h"
/**
*cap_string -function that capitalize all words of a strin
*@str: string argument
*
*Return: the converted capitalized string
*/
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] <= 'z' &&  str[i] >= 'a'))
			i++;
		if (str[i - 1] == ' ' || str[i - 1] == '\n' || i == 0 ||
		str[i - 1] == '}' || str[i - 1] == '}' || str[i - 1] == ',' ||
		str[i - 1] == ';' || str[i - 1] == '!' || str[i - 1] == '?' ||
		str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' ||
		str[i - 1] == '.' || str[i - 1] == '\t')
			str[i] -= 32;
		i++;
	}
	return (str);
}
