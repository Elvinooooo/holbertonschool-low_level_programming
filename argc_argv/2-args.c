#include <stdio.h>
/**
*main - function prints prints all arguments it receives.
*@argc: count of the arguments
*@argv: array of string including name of function
*
*Return: 0 for stopping the program
*/
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
