#include <stdio.h>
/**
 * main - Entry point of the program
   *
      * Description: This function is the entry point of the program. It prints
* a specific message to the standard output.
	       *
* Return: 0 to indicate successful execution.
*/
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
