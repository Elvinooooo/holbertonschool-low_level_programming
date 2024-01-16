#include "search_algos.h"
/**
*linear_search - function that searches a value in array using Linear search
*@array: the array where should the value be searched
*@size: the size of the given array
*@value: the value to be searched
*Return:  the first index where value is located or -1
* if the value is not present in the given array or if array is NULL
*/
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
