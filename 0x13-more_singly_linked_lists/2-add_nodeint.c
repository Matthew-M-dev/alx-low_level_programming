#include "lists.h"
/**
 * add_nodeint - Write a function that adds a new node
 * @head: beginning node
 * @n: input
 * Return:the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = *head;
	*head = add;
	return (add);
}
