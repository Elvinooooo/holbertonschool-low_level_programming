#include "main.h"
/**
*rev_string - Function that reverses a string
*@s: The char pointer argument
*
*/
void rev_string(char *s)
{
	int len = 0;
	int i;
	int j = 0;

	while (s[len])
	{
		len++;
	}
	for (i = len - 1; i >= j; i--)
	{
		char temp = s[j];

		s[j] = s[i];
		s[i] = temp;
		j++;
	}
}
