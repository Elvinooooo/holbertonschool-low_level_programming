#include <stdio.h>
/**
* main - prints sum of even numbers of fibonacci sequence starting 1, 2
*
*Return: 0 to stop the program
*/
int main(void)
{
	long j = 1;
	long k = 1;
	long fibonacci = 1;
	long sum = 0;

	while (fibonacci < 4000000)
	{
		fibonacci = k + j;
		j = k;
		k = fibonacci;
		if (fibonacci % 2 == 0)
		{
			sum += fibonacci;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
