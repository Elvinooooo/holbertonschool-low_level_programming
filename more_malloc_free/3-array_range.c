#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*array_range - function that creates an array of integers
*@min:the minimum(included) value of array
*@max: the maximum(included) value of the array
*
*Return:the pointer to the newly created array
*Null if min > max or malloc fails
*/
int *array_range(int min, int max)
{
	int *result;
	int i;
	int size;

	if (min > max)
		return (NULL);
	size  =  (max - min) + 1;
	result = malloc(sizeof(int) * size);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		result[i] = min++;
	return (result);
}
