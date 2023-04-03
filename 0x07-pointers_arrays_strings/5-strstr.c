#include "main.h"
#include <stddef.h>
/**
 * _strstr - Write a function that locates a substring.
 * @haystack: pointer to string
 * @needle: pointer to string
 * Return: NULL or a pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, c;
	int checker = 0;
	int num = 0;

	for (i = 0; haystack[i] != '\0' && (checker == 0); i++)
	{
		num = i;

		if (needle[0] == haystack[i])
		{
			for (c = 0; needle[c] != '\0' && haystack[i + c] != '\0'; c++)
			{
				if (needle[c] == haystack[i + c])
				{
					checker = 1;
				}
				else
				{
					checker = 0;
					break;
				}
			}
		}
	}
	if (checker == 1)
	{
		return (haystack + num);
	}
	return (NULL);
}
