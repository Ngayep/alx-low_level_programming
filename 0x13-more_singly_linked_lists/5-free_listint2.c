#include "lists.h"

/**
* free_listint2 - frees a listint_t list
* @head: pointer to the first node
* sets head to NULL
*/

void free_listint2(listint_t *head)
{
	listint_t *temp, *current;

	if (head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
