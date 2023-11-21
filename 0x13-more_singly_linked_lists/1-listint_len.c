#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a list.
 * @h: input
 * Return: number of elements in a linked list_t list.
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->n)
			count++;
		h = h->next;
	}
	return (count);
}
