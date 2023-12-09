#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: the number to get from
 * @m: the number to get to
 * Return: The number needed in order to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor;
	unsigned int bits = 0;

	xor  = n ^ m;
	while (xor > 0)
	{
		bits += (xor & 1);
		xor = xor >> 1;
	}
	return (bits);
}
