#include "main.h"

/**
 * print_sign - A function function that
 * prints the sign of a number.
 * @n: is a iether a variable or degit
 * Return: 1 mean + 0 mean 0 -1 mean - sign
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
