#include <stdio.h>
/**
* main - Entry point
*
* Description: this program is printing with the help of putchar function
*
* Return: 1
*/

int main(void)
{
	char string[] = "and that piece of art is useful\"- Dora Korpar,\
			2015-10-19\n";
	int i;

	for (i = 0; i <= 58; i++)
	{
		putchar(string[i]);
	}

	return (1);
}
