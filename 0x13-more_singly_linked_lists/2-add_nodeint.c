#include "lists.h"

/**
  * add_nodeint - adds a new node at the beginning
  * of a linked list
  *
  * @head: head of a double pointer
  * @n: add integer variable
  *
  * Return: NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodeA;

	if (head == NULL)
		return (NULL);

	nodeA = malloc(sizeof(listint_t));

	if (nodeA == NULL)
		return (NULL);

	nodeA->n = n;
	nodeA->next = *head;
	*head = nodeA;

	return (nodeA);
}
