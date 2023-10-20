#include "main.h"
/**
*print_square-function that prints a square followed
*by a new line using only _putchar function
*@size: argument of the function showing the size of square
*/

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
}
