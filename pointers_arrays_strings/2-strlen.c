#include "main.h"
/**
* _strlen - Function that function that returns the length of a string.
*@s: The char pointer argument
*
* Return - the length of the string
*/
int _strlen(char *s)
{
	int len = 0;
	
	while (*s)
	{
		s++;
		len++;
	}
	return (len);
}
