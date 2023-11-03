#include <stdio.h>
#include <stdlib.h>
/**
*main - function that multiplies two numbers.
*@argc: count of the arguments
*@argv: array of string including name of function
*
*Return: 0 for stopping the program
*/
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
