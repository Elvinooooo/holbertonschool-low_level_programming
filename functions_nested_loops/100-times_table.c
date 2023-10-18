#include "main.h"
#include <stdio.h>
/**
*print_times_table - function that prints time table of the given number
*
*@n: the given number for the apropriate time table
*/
void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		return;
	}
	else
	{
		int i = 0;

		for (; i <= n ; i++)
		{
		int j = 0;
		int result;

		for (; j <= n; j++)
		{
			result = i * j;
			if (j == n)
			{
				printf("%d", result);
			}
			else
			{
				printf("%d, ", result);
			}
		}
		printf("\n");
		}
	}
}
