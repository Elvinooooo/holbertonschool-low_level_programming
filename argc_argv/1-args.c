#include <stdio.h>
/**
*main - function that prints the number of arguments
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
