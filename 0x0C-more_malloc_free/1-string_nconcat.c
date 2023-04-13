#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: Number of bytes
 * Return: VOID pointer
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
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i, j = 0;

	if (s2 != NULL && n >= lengo(s2))
	{
		p = malloc((lengo(s1) + lengo(s2) + 1) * sizeof(char));
	}
	else if (s2 != NULL && n < lengo(s2))
	{
		p = malloc((lengo(s1) + n + 1) * sizeof(char));
	}
	else if (s2 == NULL)
	{
		p = malloc((lengo(s1) + 1) * sizeof(char));
	}
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < lengo(s1))
	{
		p[i] = s1[i];
		i++;
	}
	while (s2 != NULL && j < lengo(s2))
	{
		p[i + j] = s2[i];
		j++;
	}
	p[i + j] = '\0';
	return (p);
}
