#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * str_concat - a function that concatenates two strings.
 * lengo - function that calculate the lenght of a string.
 * @se: pionter to a string
 * @str: pointer that point to a string
 * @ss: pionter to a string
 * Return: return a pointer to the newlly created string
 */
int lengo(char *str)
{
	int i = 0;

	while (str[i] != '\0' && str != NULL)
	{
		i++;
	}
	return (i);
}
char *str_concat(char *se, char *ss)
{
	int i = lengo(se);
	int j = lengo(ss);
	int s = 0;
	char *p = NULL;

	p = (char *) malloc((i + j + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	while (s < i)
	{
		p[s] = se[s];
		s++;
	}
	while (s < (j + i))
	{
		p[s] = ss[s];
		s++;
	}
	p[s] = '\0';
	return (p);
}
