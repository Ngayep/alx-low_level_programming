#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * list_len - finds the number of nodes in a list
  * @h: singly linked list
  * Return: number of elements in a linked list
  */
size_t list_len(const list_t *h)
{
	int count;

	for (count = 0; h; count++)
		h = h->next;
	return (count);
}
