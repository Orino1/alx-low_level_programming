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
	char str = 'a';

	int num = 0;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
	}
	for (str = 'a'; str <= 'f'; str++)
	{
		putchar(str);
		if (str == 'f')
		{
			putchar('\n');
		}
	}
	return (0);
}
