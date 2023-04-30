#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint -  a function that frees a listint_t list.
 * @head: is a pointer to the first node of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temporary;

	while (head != NULL)
	{
		temporary = head->next
		free(head);
		head = temporary;
	}
}
