#include "main.h"
/**
* swap_int - Function that swaps the values of two integers.
*@a: The first pointer integer
*@b: the second pointer integer
*/
void swap_int(int *a, int *b)
{
	int c;

	c =  *a;
	*a = *b;
	*b = c;
}
