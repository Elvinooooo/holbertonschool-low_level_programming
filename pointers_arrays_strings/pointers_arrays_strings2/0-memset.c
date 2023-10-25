#include "main.h"
/**
*_memset -   function that fills memory with a constant byte.
*@s: parameter pointed by it
*@b:constant byte
*@n:the parameter for defining first n bytes
*
*Return: char
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
