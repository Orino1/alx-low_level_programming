#include "main.h"
#include <stdlib.h>
/**
 * add_node_end -  a function that adds a new node at
 * the end of a list_t list.
 * @head: is a pointer to the first node in the list
 * @str: string
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newlistattheend;
	list_t *temp = *head;
	unsigned int len = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	newlistattheend = malloc(sizeof(list_t));
	if (newlistattheend == NULL)
	{
		return (NULL);
	}
	newlistattheend->str = strdup(str);
	newlistattheend->len = len;
	newlistattheend->next = NULL;
	if (head == NULL)
	{
		*head = newlistattheend;
		return (newlistattheend);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newlistattheend;

	return (newlistattheend);
}
