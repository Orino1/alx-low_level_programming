#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: pointer to string
 * @b: pointer to string
 * @n: int
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
