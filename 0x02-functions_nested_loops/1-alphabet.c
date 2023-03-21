#include "main.h"

/**
 * main - A function that prints From a to z
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
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
	return (0);
}
