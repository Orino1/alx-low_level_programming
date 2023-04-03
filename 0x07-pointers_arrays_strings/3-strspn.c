#include "main.h"
/**
 * _strspn - a function that gets the
 * length of a prefix substring.
 * @s: pointer to string
 * @accept: char
 * Return: ifthere
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int ifthere = 0;
	int checker = 1;

	for (i = 0; (s[i] != '\0') && (checker == 1); i++)
	{
		checker--;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				ifthere = i + 1;
				checker++;
			}
		}
	}
	return (ifthere);
}
