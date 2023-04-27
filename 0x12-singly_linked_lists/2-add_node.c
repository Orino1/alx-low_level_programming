#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_node -  a function that adds a new node at
 * the beginning of a list_t list.
 * @head: is a pointer to the first node in the list
 * @str: string
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newlist;
	unsigned int len = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	newlist = malloc(sizeof(list_t));
	if (newlist == NULL)
	{
		return (NULL);
	}
	newlist->str = strdup(str);
	newlist->len = len;
	newlist->next = (*head);
	(*head) = newlist;

	return (*head);
}
