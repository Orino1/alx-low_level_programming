#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_listint - a function that prints all the
 * elements of a listint_t list.
 * @h: is a pointer to the first node of the list
 * Return: Number of elements in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t result = 0;
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n",h->n);
		result++;
		h = h->next;
	}
	return (result);
}
