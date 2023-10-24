#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list.
 * @h: linked list of type listint_t to be printed
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d elements\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
