#include "main.h"
/**
 * _strpbrk - a function that searches a
 * string for any of a set of bytes.
 * @s: pointer to string
 * @accept: pointer to string
 * Return: ifthere
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	int checker = 1;

	for (i = 0; (s[i] != '\0') && (checker == 1); i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				checker--;
				return (s + i);
			}
		}
	}
	return (NULL);
}
