#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node of
 * a listint_t linked list.
 * @head: is a pointer to a pointer to the first node of the list
 * @index: the index of the node starting from 0
 * Return: the nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temporary;

	temporary = head;
	if (temporary == NULL)
	{
		return (NULL);
	}
	for (i = 0; temporary != NULL; i++)
	{
		if (i == index)
		{
			return (temporary);
		}
		temporary = temporary->next;
	}
	return (NULL);
}
