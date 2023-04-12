#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - a function that returns a pointer to a
 * newly allocated space in memory, which contains a copy
 * of the string given as a parameter.
 * @str: pionter to a string
 * Return: return a pointer to the newlly created string
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *p = NULL;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	p = (char *) malloc((i + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	while (j <= i)
	{
		p[j] = str[j];
		j++;
	}
	p[j] = '\0';
	return (p);
}
