#include "main.h"
/**
*reverse_array - Function that reverses the content of
*an array of integers
*@a: The given array
*@n: is the number of elements of the array
*
*/
void reverse_array(int *a, int n)
{
	int i, j = 0;

	for (i = n - 1; i >= j; i--)
	{
		int temp =  a[j];

		a[j] =  a[i];
		a[i] =  temp;
		j++;
	}
}
