#include "main.h"
#include <stdio.h>
/**
* print_to_98 - function that all natural numbers from n
*to 98, followed by a new line.
*
*@n : argument of the function
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
		}
	}
	printf("\n");
}
