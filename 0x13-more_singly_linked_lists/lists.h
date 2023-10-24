#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Singly Linked list
 * @n: Integer
 * @next: Points to the next node
 *
 * Description: Singly linked list node structure
 *
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);

int _putchar(char c);

#endif /* Prepared by Happy Chukwuma */
