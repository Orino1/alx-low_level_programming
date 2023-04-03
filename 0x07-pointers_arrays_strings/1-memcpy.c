#include "main.h"
/**
 * _memcpy - a function that fills memory with a constant byte.
 * @src: pointer to string
 * @dest: pointer to string
 * @n: int
 * Return: pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
