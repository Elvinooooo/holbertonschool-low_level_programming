#include "main.h"
/**
 *clear_bit - function that sets the value of a bit to 0 at a given index
 *@n: the value of pointer
 *@index: the index that should be changed
 *Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size  = sizeof(*n) * 8 - 1;

	if (index > size)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
