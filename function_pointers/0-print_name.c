#include "function_pointers.h"
#include <stdio.h>
/**
* print_name -  function that prints given name
* @name: the name to be printed
* @f: function pointer
* Return : nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
	{
		f(name);
	}
}
