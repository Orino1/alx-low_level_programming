#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: is a pointer to a pointer to the first node of the list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new_head = NULL, *temp = NULL;

	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = new_head;
		new_head = *head;
		*head = temp;
	}

	return (new_head);
}
