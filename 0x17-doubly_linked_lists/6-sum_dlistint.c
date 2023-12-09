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
	int count;
	dlistint_t *tail;

	if (head == NULL)
		return (0);
	while (head && tail->next != NULL)
	{
		count++;
	}
	return (count);
}
