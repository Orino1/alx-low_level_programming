#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node at
 * index index of a listint_t linked list.
 * @head: is a pointer to a pointer to the first node of the list
 * @index: INDEX OF the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;
	listint_t *tempn;

	temp = *head;

	if (*head == NULL && index > 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; temp != NULL; i++)
	{
		if (i  == index - 1)
		{
			if ((temp->next)->next == NULL)
			{
				free(temp->next);
				temp->next = NULL;
				return (1);
			}
			tempn = (temp->next)->next;
			free(temp->next);
			temp->next = tempn;
			return (1);
		}
		temp = temp->next;
	}
	return (-1);
}
