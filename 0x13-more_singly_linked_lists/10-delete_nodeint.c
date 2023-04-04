#include "lists.h"

/**
* delete_nodeint_at_index - Delete the node at a index of
* a listint_t linked list
* @head: Reference to the start of the list
* @index: Index of the node that should be deleted.
*
* Return: 1 if success else -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int i;
	listint_t *temp;

	for (i = -1; *head != NULL; i++)
	{
		if (i + 1 == (int) index)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
			return (1);
		}
		head = &(*head)->next;
	}
	return (-1);
}
