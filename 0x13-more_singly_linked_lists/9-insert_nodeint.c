 #include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at idx
* @head: pointer to a pointer to a node
* @idx: index where the new node should be added
* @n: data at the node
* Return: Null if fail or addresss of the newnode otherwise
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode == NULL)
			return (NULL);
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	temp = *head;
	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			newNode = malloc(sizeof(listint_t));
			if (newNode == NULL)
				return (NULL);
			newNode->n = n;
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
	temp = temp->next;
	i++;
	}
	return (NULL);
}
