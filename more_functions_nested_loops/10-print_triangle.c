#include "main.h"
/**
*print_triangle -function that prints a triangle followed by a line
*using only _putchar function
*@size: argument of the function that defines  the size of the triangle
*
*/

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = i + 1; j < size; j++)
			{
				_putchar(' ');
			}
			for (k = size - i; k <= size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
