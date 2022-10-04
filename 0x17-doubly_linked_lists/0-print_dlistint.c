#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints values of a doubly linked list
 * @h: pointer to the head of the list
 * Return: the number of values
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;
	dlistint_t *temp;

	if (h == NULL)
		return (0);

	temp = h;

	for (count = 0; temp != NULL; count++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}

	return (count);
}
