#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head of the list
 * Return: number of elements of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	if (h == NULL)
		return (0);
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
