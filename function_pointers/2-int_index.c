#include "function_pointers.h"
#include <stdio.h>
/**
* int_index - function that searches for an integer.
* @array: the array where the integer should be searched
* @size: the size of the arrray
* @cmp: pointer to function
* Return: the index of the first element for which the
* cmp function does not return 0.If no element matches, return -1
* if size <= 0, return -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
