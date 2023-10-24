#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *lenOne = head;
	listint_t *lenTwo = head;

	if (!head)
		return (NULL);

	while (lenOne && lenTwo && lenTwo->next)
	{
		lenTwo = lenTwo->next->next;
		lenOne = lenOne->next;
		if (lenTwo == lenOne)
		{
			lenOne = head;
			while (lenOne != lenTwo)
			{
				lenOne = lenOne->next;
				lenTwo = lenTwo->next;
			}
			return (lenTwo);
		}
	}

	return (NULL);
}
