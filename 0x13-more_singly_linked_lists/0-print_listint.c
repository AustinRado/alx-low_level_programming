#include "lists.h"

/**
* print_listint - print all elements of listint_t list
* @h: listint_t list head
*
* Return: numbers of elements
*/

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
