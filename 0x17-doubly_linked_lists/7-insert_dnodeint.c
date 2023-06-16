#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - a function that inserts a new node at
 * a given position.
 * @h: pointer to the head of the linked list.
 * @idx: idx is the index of the list where the new node should be
 * added. Index starts at 0
 * @n: is the element to be stored in the new list
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *corrent_node;
	unsigned int i;
	const int const_n = (const int)n;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	corrent_node = *h;
	for (i = 0; corrent_node != NULL; i++)
	{
		if (idx == 0)
		{
			free(new_node);
			return (add_dnodeint(corrent_node, const_n));
		}
		else if (i == idx)
		{
			new_node->next = corrent_node;
			new_node->prev = corrent_node->prev;
			corrent_node->prev = new_node;
			(new_node->prev)->next = new_node;
		}
		else if (corrent_node->next == NULL)
		{
			free(new_node);
			return (add_dnodeint_end(corrent_node, const_n));
		}
		corrent_node = corrent_node->next;
	}
	return (NULL);
}
