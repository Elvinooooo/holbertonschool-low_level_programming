#include "3-calc.h"
#include <stdio.h>
/**
* get_op_func -  function that chooses the operation to execute
* @s: operator passed as argument to the program
* Return: pointer to the selected function
*/

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t options[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	while (options[i].op != NULL)
	{
		if (*(options[i].op) == *s && s[1] == '\0')
			return (options[i].f);
		i++;
	}
	return (NULL);
}
