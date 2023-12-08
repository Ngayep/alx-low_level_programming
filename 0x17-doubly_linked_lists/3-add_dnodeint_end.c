#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/*
 * add_dnodeint_end - adds a new node at the end and returns its address
 * @head: first element of the list
 * @n: data containied in node
 * Return: address of new element or 0 if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
	}
	else
	{
		dlistint_t *tail = *head;

		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		newnode->prev = tail;
		tail->next = newnode;
	}

	return (newnode);
}
