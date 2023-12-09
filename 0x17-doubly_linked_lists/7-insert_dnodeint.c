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
	dlistint_t *head;
	dlistint_t *newnode;
	unsigned int i = 0;

	newnode = NULL;
	if (idx == 0)
		newnode = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;

		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					newnode = add_dnodeint_end(h, n);
				else
				{
					newnode = malloc(sizeof(dlistint_t));
					if (newnode != NULL)
					{
						newnode->n = n;
						newnode->next = head->next;
						newnode->prev = head;
						head->next->prev = newnode;
						head->next = newnode;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}
	return (newnode);
}
