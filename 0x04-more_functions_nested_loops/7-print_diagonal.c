#include "main.h"

/**
 * print_diagonal - a function that draws a
 * diagonal line on the terminal.
 * @n: an int.
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j;

		int c;

		for (j = 0; j < n; j++)
		{
			_putchar('\\');
			_putchar('\n');
			if (j != (n-1))
			{
				for (c = 0; c <= j; c++)
				{
					_putchar(' ');
				}
			}
		}
	}
}
