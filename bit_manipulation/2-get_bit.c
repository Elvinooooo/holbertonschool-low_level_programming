#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @index: the index, starting from 0 of the bit you want to get
 * @n: the fiven number
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int *binary = malloc(sizeof(int) * (index + 1));
	unsigned int i = 0;
	int result;

	if (binary == NULL)
		return (-1);
	while (n > 0)
	{
		binary[i] =  n % 2;
		n /= 2;
		i++;
	}
	if (index < i)
		result = binary[index];
	else
		result = -1;
	return (result);
}
