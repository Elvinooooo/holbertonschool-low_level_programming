#include <stdio.h>
/**
*main - function that prints fizz for multipliers of 3
*buzz for multipliers 5 and fizz buzz for both
*from 1 to 100
*
*Return: 0 to stop the program
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else
		{
			if (i == 1)
				printf("%d", i);
			else
				printf(" %d", i);
		}
	}
	return (0);
}
