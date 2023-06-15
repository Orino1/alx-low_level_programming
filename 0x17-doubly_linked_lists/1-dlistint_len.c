#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len - a function that returns the number of elements in a linked
 * @h: pointer to the head of the linked list
 * Return: Number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
