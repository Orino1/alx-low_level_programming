#include "main.h"
/**
 * _strlen_recursion - a function that returns
 * the length of a string.
 * @s: the string
 * Return: i as the lenght of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;
	if (*s != '\0')
	{
		i++;
		i = (_strlen_recursion((s + 1)) + i );
	}
	return (i);
}
