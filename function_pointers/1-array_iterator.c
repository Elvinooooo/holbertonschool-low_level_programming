#include <stdio.h>
#include "function_pointers.h"
/**
* array_iterator - function that executes a function given as parameter
* on each element of an array
* @array: the given array
* @size: the size of an array
* @action: function that will be executed
* Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL)
	{
		for (; i < size; i++)
			action(array[i]);
	}
	else
		return;
}
