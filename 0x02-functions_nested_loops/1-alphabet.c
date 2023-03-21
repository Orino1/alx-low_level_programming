#include "main.h"

/**
 * main - A function that prints From a to z
 * followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char str = 'a';

	for (str = 'a'; str <= 'z'; str++)
	{
		if (str != 'z')
		{
			_putchar(str);
		}
		else
		{
			_putchar('\n');
		}
	}
}
