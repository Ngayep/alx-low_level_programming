#include "lists.h"

/**
* pop_listint - deletes a node of a linked list
* @head: pointer to a pointer to the first element of a node
* Return: the head node's data and 0 if linked list empty
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	n = temp->n;

	*head = (*head)->next;
	free(temp);
	return (n);
}

