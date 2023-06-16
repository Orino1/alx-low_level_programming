#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - a function that adds a new node at the end
 * of a dlistint_t list.
 * @head: pointer to the head of the linked list.
 * @n: n element to be stored in the new node.
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last;

	new = malloc(sizeof(dlistint_t));
	last = *head;
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (last == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	new->next = NULL;
	new->prev = last;
	last->next = new;
	return (new);
}
