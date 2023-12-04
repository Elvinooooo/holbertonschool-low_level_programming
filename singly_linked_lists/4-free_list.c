#include "lists.h"
#include <stdlib.h>
/**
*free_list - function that frees a list_t list.
*@head: list to be freed
*Return: Nothing
*/
void free_list(list_t *head)
{
	list_t *next_node;

	while (head)
	{
		next_node = head->next;
		free(head->str);
		free(head);
		head = next_node;
	}

}
