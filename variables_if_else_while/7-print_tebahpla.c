#include <stdio.h>
/**
* main - Entry point of the program
*
* Description: This function prints all alphabet letters in lowercase
* but in the reversed order..
*
* Return: 0 to indicate successful execution.
*/
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}

	putchar('\n');
	return (0);
}
