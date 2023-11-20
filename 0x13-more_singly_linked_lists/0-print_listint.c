#include "lists.h"
#include <stddef.h>

/**
 * print_listint - Write a function that prints all the elements of a list
 * @h: input
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	while(h)
	{
		if (h->n)
		{
			printf("%d\n", h->n);
		}
		i++;

		h = h->next;
	}
	return (i);
}
