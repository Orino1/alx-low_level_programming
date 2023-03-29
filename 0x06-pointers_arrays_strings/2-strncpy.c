#include "main.h"
/**
 * _strncpy - a function that concatenates two
 * strings.
 * @dest: pointer to string
 * @src: pointer to string
 * @n: int
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	int leng = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		leng++;
	}
	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else if (src[i] == '\0')
		{
			dest[i] = src[i];
			break;
		}
	}
	return (dest);
}
