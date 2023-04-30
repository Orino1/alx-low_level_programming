#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head: is a pointer to a pointer to the first node of the list
 * Return: int n, if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temporary;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	temporary = (*head)->next;
	free(*head);
	*head = temporary;
	return (n);
}
