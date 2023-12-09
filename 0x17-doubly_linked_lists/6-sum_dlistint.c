#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data
 * @head:  head of list
 * Return: 0 if empty list or number of elements
 */

int sum_dlistint(dlistint_t *head)
{
	int count = 0;
	dlistint_t *tail = head;

	if (head == NULL)
		return (NULL);

	while (tail != NULL)
	{
		count += tail->n;
		tail = tail->next;
	}
	return (count);
}
