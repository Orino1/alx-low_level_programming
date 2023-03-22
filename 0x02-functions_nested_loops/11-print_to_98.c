#include <stdio.h>
/**
 * print_to_98 - A function function that
 * prints all natural numbers from n to
 *  98, followed by a new line.
 * @n: is a number
 * Return: void
 */
void print_to_98(int n)
{
	int inputnm = n;

	if (inputnm > 98)
	{
		for (n = inputnm; n >= 98; n--)
		{
			if(n != 98)
			{
				printf("%d, ",n);
			}
			else
			{
				printf("%d\n",n);
			}
		}
	}
	else if (inputnm <= 98)
	{
		for (n = inputnm; n <= 98; n++)
		{
			if(n != 98)
			{
				printf("%d, ",n);
			}
			else
			{
				printf("%d\n",n);
			}
		}
	}
}
