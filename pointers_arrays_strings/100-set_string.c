#include <stdio.h>
#include "main.h"
/**
*set_string - function that sets the value of a pointer to a char
*@s: pointer argument
*@to: value that the pointer should be set
*/
void set_string(char **s, char *to)
{
	*s = to;
}
