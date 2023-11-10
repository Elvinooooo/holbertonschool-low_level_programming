#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
*alloc_grid - function that returns a pointer to a 2d array of integers
*@width: the width of two dimensional array
*@height: the height of two dimensional array
*
*Return: the result array on success. On failure NULL
*/
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array =  malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (arra[i] == NULL)
			free(array);	
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
