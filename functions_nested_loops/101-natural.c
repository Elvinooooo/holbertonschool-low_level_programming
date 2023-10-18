#include <stdio.h>
/**
*main - Entry point of a program that
*
* Return: 0 in order to stop the program
*/
int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
