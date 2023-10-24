#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a list
 * @head: a pointer to a pointer to the head of the list
 * @index: the index of the node to delete, starting from 0
 * Return: 1 if deletion succeeds, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
		listint_t *current, *temp;
		unsigned int i = 0;

		if (head == NULL || *head == NULL)
			return (-1);

		if (index == 0)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
			return (1);
		}

		current = *head;
		while (current != NULL)
		{
			if (i == index - 1)
			{
				if (current->next == NULL)
					return (-1);
				temp = current->next;
				current->next = temp->next;
				free(temp);
				return (1);
			}
				current = current->next;
				i++;
		}
			return (-1);
}
