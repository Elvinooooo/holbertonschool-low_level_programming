#include "main.h"
/**
*_strcat -  function that concatenates two strings.
*@dest: destination string
*@src: src string to be added to dest string
*
*Return: dest string
*/
char *_strcat(char *dest, char *src)
{
	int destLen = 0;
	int srcLen = 0;
	int i = 0;
	int j = 0;

	for (; dest[i]; i++)
		destLen++;
	for (i = 0; src[i]; i++)
		srcLen++;
	for (i = destLen; i < destLen + srcLen; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
