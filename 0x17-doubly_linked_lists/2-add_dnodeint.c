#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - a function that adds a new node at the beginning of
 * a dlistint_t list.
 * @head: pointer to the head of the linked list
 * @n: n element to be added to the new node
 * Return: Number of nodes in the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = (*head);
	(*head)->prev = new_node;
	*head = new_node;
	return (*head);
}
