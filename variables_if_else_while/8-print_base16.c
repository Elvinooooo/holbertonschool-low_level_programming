#include <stdio.h>
/**
* main - Entry point of the program
*
*Description: This function prints all the number of base 16
* using only putchar method three times
*
* Return: 0 to indicate successful execution.
*/
int main(void)
{
	int i = 0;
	char c = 'a';

	for (; i < 10; i++)
	{
		putchar('0' + i);
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
