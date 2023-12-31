#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head of a list
 * Return: ponter to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}
	*head = p;
	return (*head);
}
