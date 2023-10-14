#include <stdio.h>
/**
* main - Entry point of the program
*
* Description: This function is printing the sizes
* in byte of different data types
*
* Return: 0 to stop the program
*/
int main(void)
{
	int intType;
	float floatType;
	long int longIntType;
	char charType;
	long long int longLongIntType;

	printf("Size of a char: %zu bytes\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(longIntType));
	printf("Size of a long long int: %zu bytes\n", sizeof(longLongIntType));
	printf("Size of a float: %zu bytes\n", sizeof(floatType));
	return (0);
}
