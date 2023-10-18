#include <stdio.h>
/**
* main - prints first 98 fibonacci nuymbers starting 1, 2
*
*Return: 0 to stop the program
*/
int main(void)
{
	int i;
	long j = 0;
	long k = 1;
	long fibonacci;

	for (i = 0; i < 98 ; i++)
	{
		fibonacci = k + j;
		if (i == 0)
		{
			printf("%ld", fibonacci);
		}
		else
		{
			printf(", %ld", fibonacci);
		}
		j = k;
		k = fibonacci;
	}
	printf("\n");
	return (0);
}
