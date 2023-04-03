#include "main.h"
/**
 * _strchr - Write a function that locates a
 * character in a string
 * @s: pointer to string
 * @c: char
 * Return: pointer dest
 */
char *_strchr(char *s, char c)
{
	int i;

	char x = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (x);
}
