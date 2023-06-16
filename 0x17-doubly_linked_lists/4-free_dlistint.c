#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: pointer to the head of the linked list.
 * Return: VOID
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			next = head->next;
			free(head);
			head = next;
		}
		free(head);
	}
}
