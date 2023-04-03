#include "main.h"
#include <stddef.h>
/**
 * _strchr - Write a function that locates a
 * character in a string
 * @s: pointer to string
 * @c: char
 * Return: pointer to the first occ of c in s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
