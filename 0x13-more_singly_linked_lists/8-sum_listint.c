#include "lists.h"

/**
* sum_listint - returns the sum of all data
* @head: pointer to first node
* Return: 0 if the list is empty, else sum of all data
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
