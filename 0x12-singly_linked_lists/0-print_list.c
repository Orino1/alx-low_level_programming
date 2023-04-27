#include <stdio.h>
#include "main.h"
/**
 * print_list - a function that prints all the
 * elements of a list_t list.
 * @h: is a pointer to the first node in the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t result = 0;
	int i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		result++;
	}
	return (result);
}
