#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_dlistint - a function that returns the sum of all the data
 * (n) of a dlistint_t linked list.
 * @head: pointer to the head of the linked list.
 * Return: the sum of all the data (n) of a dlistint_t linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *corrent_node;
	int i, result;

	if (head == NULL)
	{
		return (NULL);
	}
	corrent_node = head;
	for (i = 0; corrent_node != NULL; i++)
	{
		result += corrent_node->n;
		corrent_node = corrent_node->next;
	}
	return (result);
}
