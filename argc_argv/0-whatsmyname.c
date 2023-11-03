#include <stdio.h>
#include <stdlib.h>
/**
*main - function that prints the name of the function
*@argc: count of the arguments
*@argv: array of string including name of function
*
*Return: 0 for stopping the program
*/
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	else
		exit(EXIT_SUCCESS);
	return (0);
}
