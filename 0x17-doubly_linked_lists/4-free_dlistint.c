#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		temp->next = NULL;
		temp->prev = NULL;
		free(tmp);
	}
}
