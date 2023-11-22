#include "lists.h"
/**
 * free_listint - Write a function that frees a listint_t list.
 * @head: first node
 * Return: void;
 */
void free_listint(listint_t *head)
{
	listint_t *clean = head;
	listint_t *temp;

	while (clean)
	{
		temp = clean->next;
		free(clean);
		clean = temp;
	}
}
