#include "lists.h"
/**
 * add_nodeint_end - Write a function that adds a new node at the end
 * @head: the first node
 * @n: input;
 * Return:  the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add;
	listint_t *pull = *head;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	if (!add->n)
	{
		free(add);
		return (NULL);
	}
	add->next = NULL;
	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	while (pull->next)
		pull = pull->next;
	pull->next = add;
	return (*head);
}
