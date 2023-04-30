#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - a function that returns the sum of all
 * the data (n) of a listint_t linked list.
 * @head: is a pointer to a pointer to the first node of the list
 * Return: sum of n's
 */
int sum_listint(listint_t *head)
{
	int i;
	int sum = 0;

	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
