#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts a new node
 * at a given position.
 * @head: is a pointer to a pointer to the first node of the list
 * @n: number or element n in the node (AKA DATA)
 * @idx: INDEX OF the new node
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int i;
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *temporary;

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;

	if (*head == NULL && idx > 0)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	temporary = *head;
	for (i = 0; temporary != NULL; i++)
	{
		if (i  == idx - 1)
		{
			if (temporary->next == NULL)
			{
				newnode->next = NULL;
				temporary->next = newnode;
				return (newnode);
			}
			newnode->next = temporary->next;
			temporary->next = newnode;
			return (newnode);
		}
		temporary = temporary->next;
	}
	return (NULL);
}
