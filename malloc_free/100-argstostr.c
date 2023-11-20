#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
*argstostr - function that concatenates all the arguments of your program
*@ac: Number of arguments.
*@av: Array of argument strings
*
*Return: Pointer to the concatenated arguments
*/
char *argstostr(int ac, char **av)
{
	int i;
	char *result;
	int tot_len = 0;
	int j = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		int len = 0;

		while (av[i][len])
			len++;
		tot_len += len + 1;
	}
	result = malloc(sizeof(char) * tot_len);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		int len = 0;

		while (av[i][len] != '\0')
		{
			result[j] = av[i][len];
			j++;
			len++;
		}
		if (i < ac - 1)
		{
			result[j] = ' ';
			j++;
		}
		else
		{
			result[j] = '\n';
			j++;
		}
	}
		result[j] = '\0';
		return (result);
}
