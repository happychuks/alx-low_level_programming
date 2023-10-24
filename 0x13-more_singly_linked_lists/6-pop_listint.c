#include "lists.h"

/**
 * pop_listint - deletes the head node
 * of a linked list
 *
 * @head: a double pointerdeletes the head node
 *
 *Return: the head node’s data (n)
*/

int pop_listint(listint_t **head)
{
	listint_t *start;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	start = *head;
	*head = start->next;

	n = start->n;
	free(start);

	return (n);
}
