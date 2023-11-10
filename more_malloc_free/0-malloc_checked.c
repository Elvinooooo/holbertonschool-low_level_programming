#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*malloc_checked - function that allocates memory using malloc
*@b: the allocated memory
*
*Return: pointer to the allocated memory in case of success, 98 fail
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
