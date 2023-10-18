#include "main.h"
#include <stdio.h>
/**
*
*
*/
void print_times_table(int n)
{
	if(n > 15 || n < 0)
		return ;
	else
	{
		int i = 0;
		int j = 0;
		int result;

		for (; i <= n ; i++)
		{
			for(; j <= n; j++)
			{
				result = i * j;
				printf("%d,  ", result);
			}		
		}
	}
}
