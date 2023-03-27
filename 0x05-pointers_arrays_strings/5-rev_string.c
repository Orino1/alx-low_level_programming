#include "main.h"
/**
 * rev_string - function that reverse
 * a string of char
 * @s: string of char
 * Return: void
 */
void rev_string(char *s)
{
	int i;

	int leng = 0;

	int start = 0;

	int start2 = 0;

	char test[leng];

	for (i = 1; *(s + i) != '\0'; i++)
	{
		leng++;
	}
	for (i = leng; i >= 0; i--)
	{
		test[start] = s[i];
		start++;
	}
	for (i = leng; i >= 0; i--)
	{
		s[start2] = test[start2];
		start2++;
	}
}
