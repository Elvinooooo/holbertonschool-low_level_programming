#include <stdio.h>
/**
* main - Entry point of the program
*
* Description: This function prints alphabet letters in lowercase
* then in uppercase only with using putchar method..
*
* Return: 0 to indicate successful execution.
*/
int main(void)
{
	char alphabet = 'a';
	char alphabet2 = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (alphabet2 <= 'Z')
	{
		putchar(alphabet2);
		alphabet2++;
	}
	putchar('\n');
	return (0);
}
