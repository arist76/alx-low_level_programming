#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	int count;
	dlistint_t *temp;
	temp = h;

	for (count = 0; temp != NULL; count++)
	{
		temp = temp->next;
	}

	return count;
}
