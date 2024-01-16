#include "main.h"
#include <stdio.h>
/**
*_strncpy -  function that copies a strings.
*@dest: destination string
*@src: src string to be added to dest
*@n:parameter of funtion that shows the starting point
*
*Return: dest string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int srcLen = 0;
	int i = 0;

	while (src[i++])
		srcLen++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = srcLen; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
