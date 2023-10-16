#include <stdio.h>
/**
* main - Entry point of the program
*
* Description: This function prints the base numbers from 0 to 10..
*
* Return: 0 to indicate successful execution.
*/
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}

	putchar('\n');
	return (0);
}
