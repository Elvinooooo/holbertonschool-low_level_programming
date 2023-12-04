#include "lists.h"
#include <stdio.h>
/**
* print_list - Function that prints all the elements of a list_t list.
* @h: The list
* Return: The size of the nodes
*/
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	size++;
	h = h->next;
	}
	return (size);
}
