#include <stdio.h>
/**
* main - Entry point of the program
*
*Description: This function prints the base numbers from 0 to 10
* using only putchar method twice
*
* Return: 0 to indicate successful execution.
*/
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar('0' + i);
		i++;
	}

	putchar('\n');
	return (0);
}
