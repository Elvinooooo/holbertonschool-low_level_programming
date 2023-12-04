#include "lists.h"
#include <string.h>
/**
* *add_node_end - function that adds a new node at the end of a list_t list.
* @head: pointer for the first element
* @str: The string that needs to be duplicated
* Return: The address of the new element or NULL if failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list, *temp;
	char *copy;
	int len = 0;

	new_list = malloc(sizeof(list_t));
	if (new_list == NULL)
		return (NULL);
	copy = strdup(str);
	if (copy == NULL)
	{
		free(new_list);
		return (NULL);
	}
	while (str[len])
		len++;
	new_list->str = copy;
	new_list->len = len;
	new_list->next = NULL;
	if (*head == NULL)
		*head = new_list;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_list;
	}
	return (new_list);
}
