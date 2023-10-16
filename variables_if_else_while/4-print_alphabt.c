#include <stdio.h>
/**
* main - Entry point of the program
*
* Description: This function prints all alphabet letters in lowercase
* exeptc q and q letter. The putchar method can bes used only twice..
*
* Return: 0 to indicate successful execution.
*/
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'q' || alphabet == 'e')
			alphabet++;
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');
	return (0);
}
