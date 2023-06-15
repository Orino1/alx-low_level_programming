#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - a function that prints all elements of a linked list
 * @h: pointer to the head of the linked list
 * Return: Number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
