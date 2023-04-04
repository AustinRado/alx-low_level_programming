#include "lists.h"

/**
* add_nodeint - adds a mode at the ed of a linked list
* @head: pointer to the first element in the list
* @n: data to insert in the new element
*
* Return: pointer to the new node, or NULL if it fails
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
