#include "main.h"

/**
 * print_last_digit - A function function that
 * prints the last digit of a number.
 * @n: is a number
 * Return: lastn
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		int pos = n * -1;

		int lastn = pos % 10;

		_putchar(lastn + '0');
		return (lastn, lastn);
	}
	else
	{
		int lastn = n % 10;

		_putchar(lastn + '0');
		return (lastn, lastn);
	}
}
