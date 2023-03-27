#include "main.h"
/**
 * _strlen - function that return
 * the len of str
 * @s: string of char
 * Return: len
 */
int _strlen(char *s)
{
	int lengt = 0;

	while (*s != '\0')
	{
		lengt++;
		s++;
	}
	return (lengt);
}
