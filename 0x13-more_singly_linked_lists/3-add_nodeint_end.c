#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * add_nodeint_end -  aa function that adds a new node
 * at the beginning of a listint_t list.
 * @head: is a pointer to the first node of the list
 * @n: is an element of the node (aka Data)
 * Return: the address of the new element, or NULL
 * if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int i;
	listint_t *created = malloc(sizeof(listint_t));
	listint_t *temporary = malloc(sizeof(listint_t));

	if (created == NULL)
	{
		return (NULL);
	}
	created->n = n;
	created->next = NULL;
	if (*head == NULL)
	{
		*head = created;
	}
	else
	{
		temporary = *head;
		while (temporary->next != NULL)
		{
			temporary = temporary->next;
		}
		temporary->next = created;
	}
	return (created);
}
