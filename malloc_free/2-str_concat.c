#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*str_concat - function that concatenates two strings
*@s1: the first string given as a parameter
*@s2: the second string to be added ti s1
*
*Return:on success concatenated string on faileure NULL.
*/
char *str_concat(char *s1, char *s2)
{
	char *result;
	int len1 = 0;
	int len2 = 0;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (result == NULL)
		return ('\0');
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = 0; j < len2; j++)
	{
		result[i] = s2[j];
		i++;
	}
	result[i] = '\0';
	return (result);
}
