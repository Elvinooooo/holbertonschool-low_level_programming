#include <stdio.h>
/**
*main - function prints the number of arguments passed into it.
*@argc: count of the arguments
*@argv: array of string including name of function
*
*Return: 0 for stopping the program
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
