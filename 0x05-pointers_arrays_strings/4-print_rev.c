#include "main.h"
/**
 * print_rev - function that print a str
 * to stdout in revs
 * @s: string of char
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	int leng = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		leng++;
	}
	for (i = leng - 1; i > 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
