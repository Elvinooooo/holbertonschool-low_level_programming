#include <stdio.h>
/**
* main - prints first 50 fibonacci nuymbers starting 1, 2
*
*Return: 0 to stop the program
*/
int main(void)
{
	int i;
	int j = 0;
	int k = 1;
	int fibonacci;

	for (i = 0; i < 50 ; i++)
	{
		fibonacci = k + j;
		if (i == 0)
		{
			printf("%d", fibonacci);
		}
		else
		{
			printf(", %d", fibonacci);
		}
		j = k;
		k = fibonacci;
	}
	printf("\n");
	return (0);
}
