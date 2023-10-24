#include "lists.h>"

/**
 * print_listint - prints all teh elements of a lisstint_t list
 * @h: head of linked list node
 * Return: the number of nodes
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
	return count;
}
