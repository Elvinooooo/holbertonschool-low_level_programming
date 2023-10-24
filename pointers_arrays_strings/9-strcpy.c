#include "main.h"
#include <stdio.h>
/**
*_strcpy - Function  that copies the string pointed to by src, including the
*terminating null byte (\0), to the buffer pointed to by dest
*@dest: The given array argument
*@src: the string for copying
*
*Return: *dest pointer
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for ( ; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
