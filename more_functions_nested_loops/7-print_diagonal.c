#include "main.h"
/**
*print_diagonal -function that draws a straight line in the terminal
*using only _putchar function
*@n: argument of the function that shows the number of times
*
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
