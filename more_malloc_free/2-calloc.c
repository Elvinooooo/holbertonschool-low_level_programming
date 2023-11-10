#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_calloc - function that allocates memory for an array, using malloc
*@nmemb:number of elements of the array
*@size: bytes of the array
*
*Return:NULL if malloc fails or size or nmeb is 0.
*otherwise pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *result;

	if (nmemb == 0 || size == 0)
		return (NULL);
	result = malloc(sizeof(nmemb) * (size + 1));
	if (result == NULL)
		return (NULL);
	return (result);
}
