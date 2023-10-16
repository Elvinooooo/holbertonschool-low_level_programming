#include <stdio.h>
/**
* main - Entry point of the program
*
*Description: This function prints the single digit numbers separated
*by comma and whitespace using only putchar method four times
*
* Return: 0 to indicate successful execution.
*/
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar('0' + i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}

	putchar('\n');
	return (0);
}
