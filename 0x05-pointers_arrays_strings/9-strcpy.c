#include "main.h"
/**
 * _strcpy - that copies the string pointed
 * to by src, including the terminating null
 *  byte (\0), to the buffer pointed to by dest.
 * @dest: pointer
 * @src: pointer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	int leng = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		leng++;
	}
	for (i = 0; i <= leng; i++)
	{
		if (i == leng)
		{
			dest[i] = '\0';
		}
		else
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
