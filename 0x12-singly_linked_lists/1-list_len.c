#include <stddef.h>
#include "lists.h"
/**
 * list_len - a function that returns the number
 * of elements in a linked list_t list.
 * @h: is a pointer to the first node in the list
 * Return: the number of elements of in the list
 */
size_t list_len(const list_t *h)
{
	size_t result = 0;
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
		result++;
	}
	return (result);
}
