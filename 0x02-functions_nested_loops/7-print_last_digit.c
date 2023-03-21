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
		int lastn = -(n % 10);

		_putchar(lastn + '0');
		return (lastn);
	}
	else
	{
		int lastn = n % 10;

		_putchar(lastn + '0');
		return (lastn);
	}
}
int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
