#include "main.h"
/**
 * _strncat - a function that concatenates two
 * strings.
 * @dest: pointer to string
 * @src: pointer to string
 * @n: int
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	int leng = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		leng++;
	}
	for (i = 0; i < n; i++)
	{
		dest[leng] = src[i];
		leng++;
	}
	return (dest);
}
