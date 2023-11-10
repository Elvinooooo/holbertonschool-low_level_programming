#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*string_nconcat - function that concatenates two strings
*@s1: the first string given as a parameter
*@s2: the second string to be added to s1
*@n:number of bytes of s2
*
*Return: concatenated string if successfull. null if fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	if (n >= len2)
		result = malloc(sizeof(char) * (len1 + len2 + 1));
	else
		result = malloc(sizeof(char) * (len1 + n + 1));
	if (result == NULL)
		return ('\0');
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		result[i] = s2[j];
		i++;
	}
	result[i] = '\0';
	return (result);
}
