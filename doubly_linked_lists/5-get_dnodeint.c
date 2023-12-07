#include "lists.h"
/**
* get_dnodeint_at_index - function that returns the nth node of the list
* @head: first element;
* @index: the index of the node starting from 0;
* Return: The list in the given index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		index--;
	}
	return (head);
}
