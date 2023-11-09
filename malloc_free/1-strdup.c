#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_strdup - fuction that returns a pointer to a newly allocated space
*in memory, which contains a copy of the string given as a parameter
*@str: string given as a parameter
*
*Return:NULL if str = NULL otherwise a pointer to the duplicated string.
*/
char *_strdup(char *str)
{
	char *ptr;
	int len = 0;
	int i = 0;

	if (str == NULL)
		return ('\0');
	while (str[len])
	{
		len++;
	}
	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
		return ('\0');
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] == '\0';
	return (*ptr);
}
