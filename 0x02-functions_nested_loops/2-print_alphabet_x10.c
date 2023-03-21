#include "main.h"

/**
 * print_alphabet - A function that prints From a to z
 * 10x followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
		char str = 'a';

		int i;

		for ( i = 0; i < 10; i++)
		{
			for (str = 'a'; str <= 'z'; str++)
			{
				_putchar(str);
			}
			_putchar('\n');
		}
}
