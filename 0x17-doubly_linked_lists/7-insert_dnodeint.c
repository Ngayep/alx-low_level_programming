#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a node at index idx
 * @idx: index at list where new node should be added
 * @n: data at node
 * @h: head node
 * Return: address of new node or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *newnode;
	unsigned int i = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode || !h)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			if (temp->next == NULL)
				return (add_dnodeint_end(h, n));
			newnode->next = temp->next;
			newnode->prev = temp;
			temp->next->prev = temp;
			temp->next = newnode;
		}
		else
			temp = temp->next;
	}

	return (newnode);
}
