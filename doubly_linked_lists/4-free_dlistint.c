#include "lists.h"
/**
* free_dlistint -  function that frees the list;
* @head: The list to be freed
* Return: nothing
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *new_node;

	while (head)
	{
		new_node = head->next;
		free(head);
		head = new_node;
	}
}
