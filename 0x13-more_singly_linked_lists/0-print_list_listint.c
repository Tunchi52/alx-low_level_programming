#include "lists.h"
#include <stdio.h>

/**
* print_listint - prints all element of a listint_t list.
* @h: list tp print
*
* Return: number of element in the list
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (0);
}
