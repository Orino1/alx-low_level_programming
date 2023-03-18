#include <stdio.h>
#include <stdlib.h>
/**
 * main - A function all single digit
 * numbers of base 10 starting from 0
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
		if (num == 9)
		{
			putchar('\n');
		}
	}
	return (0);
}
