#include "lists.h"
#include <stdlib.h>

/**
  * pop_listint - deletes the head node of a listint_t list
  * @head: double pointer to the beginning of the list
  *
  * Return: the head nodes data (n)
  */
int pop_listint(listint_t **head)
{
	listint_t *first;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	first = *head;
	*head = first->next;
	n = first->n;
	free(first);
	return (n);
}
