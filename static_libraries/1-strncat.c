#include "main.h"
#include <stdio.h>
/**
*_strncat -  function that concatenates two strings.
*@dest: destination string
*@src: src string to be added to dest string
*@n:
*
*Return: dest string
*/
char *_strncat(char *dest, char *src, int n)
{
	int destLen = 0;
	int i = 0;

	while (dest[i++])
		destLen++;
	for (i = 0; src[i] && i < n; i++)
		dest[destLen++] = src[i];
	return (dest);
}
