#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @index: the index, starting from 0 of the bit you want to get
 * @n: the fiven number
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = sizeof(n) * 8 - 1;

	if (index > size)
		return (-1);
	return ((n >> index) & 1);
}
