#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point of the program
*
* Description: The program generates a random number, then takes
* the last digit of the generated number and prints the comparison of it with 5
*
* Return: Always 0.
*/
int main(void)
{
	int n;
	int modulus;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	modulus = n % 10;
	if (modulus > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, modulus);
	else if (modulus == 0)
		printf("Last digit of %d is %d and is 0\n", n, modulus);
	else if (modulus < 6 && modulus != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, modulus);
	return (0);
}
