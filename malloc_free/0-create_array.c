#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*create_array - fuction that creates an array of chars, and initializes it
*with a specific char
*@size:size of array to be created
*@c:the array
*
*Return: the created array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str = malloc(sizeof(char) * size);

	if (size == 0)
		return ('\0');
	if (str == NULL)
		return ('\0');
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
