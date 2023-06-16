#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - a function that frees a dlistint_t list.
 * @head: pointer to the head of the linked list.
 * @index: is the index of the node, starting from 0
 * Return: the nth node of a dlistint_t linked list, if the node
 * does not exist return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *corrent_node;
	unsigned int i;

	corrent_node = head;
	for (i = 0; corrent_node != NULL; i++)
	{
		if (i == index)
		{
			return (corrent_node);
		}
		corrent_node = corrent_node->next;
	}
	return (NULL);
}
