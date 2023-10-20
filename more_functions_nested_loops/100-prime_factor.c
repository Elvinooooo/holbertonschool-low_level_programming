#include  <stdio.h>
/**
*main - entry point of function that prints the largest factor of the
* 612852475143
*
*Return: 0 to stop the program
*/
int main(void)
{
	long number = 612852475143;
	int fact = 2;
	int largestNum = 0;

	while (number > 1)
	{
		if (number % fact == 0)
		{
			largestNum = fact;
			while (number % fact == 0)
			{
				number /= fact;
			}
		}
		fact++;
	}
	printf("%d\n", largestNum);
	return (0);
}
