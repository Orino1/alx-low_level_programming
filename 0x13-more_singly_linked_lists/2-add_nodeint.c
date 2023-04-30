#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint -  aa function that adds a new node
 * at the beginning of a listint_t list.
 * @head: is a pointer to the first node of the list
 * @n: is an element of the node (aka Data)
 * Return: the address of the new element, or NULL
 * if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *created = malloc(sizeof(listint_t));

	if (created == NULL)
	{
		return (NULL);
	}
	created->n = n;
	created->next = *head;
	return (created);
}
