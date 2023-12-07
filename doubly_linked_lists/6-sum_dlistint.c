#include "lists.h"
/**
* sum_dlistint -  function that returns the sum of all the data in list.
* @head: the first element of the linked list
* Return: The sum of the integers
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head =  head->next;
	}
	return (sum);
}
