#include <stdio.h>
/**
* main - Entry point of the program
*
*Description: This function prints all possible different combinations of two
*digits separated by comma and whitespace using only putchar method five times
*
* Return: 0 to indicate successful execution.
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i == 8 && j == 9)
			{
				putchar('\n');
			}
			else
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	return (0);
}
