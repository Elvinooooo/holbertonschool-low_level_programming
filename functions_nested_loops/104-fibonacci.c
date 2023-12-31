#include <stdio.h>
/**
* main - prints first 98 fibonacci nuymbers starting 1, 2
*
*Return: 0 to stop the program
*/
int main(void)
{
	unsigned long j = 0;
	unsigned long k = 1;
	unsigned long l = 0;
	unsigned long m = 2;
	unsigned long fibonacci1;
	unsigned long fibonacci2;
	unsigned long fibonacci3;
	int i;

	printf("%lu, %lu, ", k, m);
	for (i = 2; i < 98 ; i++)
	{
		if (k + m > 10000000000 || l > 0 || j > 0)
		{
			fibonacci1 = (k + m) / 10000000000;
			fibonacci2 = (k + m) % 10000000000;
			fibonacci3 = j + l + fibonacci1;
			j = l;
			l = fibonacci3;
			k = m;
			m = fibonacci2;
			printf("%lu%010lu", l, m);
		}
		else
		{
			fibonacci2 =  k + m;
			k = m;
			m = fibonacci2;
			printf("%lu", m);
		}
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
