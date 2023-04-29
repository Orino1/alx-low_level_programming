#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len -  a function that returns the number
 * of elements in a linked listint_t list.
 * @h: is a pointer to the first node of the list
 * Return: Number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t result = 0;
	int i;

	for (i = 0; h != NULL; i++)
	{
		if (h->n)
		{
			result++;
		}
		h = h->next;
	}
	return (result);
}
