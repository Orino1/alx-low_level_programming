#include "main.h"
/**
 * _strcat - a function that concatenates two
 * strings.
 * @dest: pointer to string
 * @src: pointer to string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;

	int leng = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		leng++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[leng] = src[i];
		leng++;
	}
	return (dest);
}
