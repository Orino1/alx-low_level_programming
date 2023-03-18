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
	char str = 'z';

	for (str = 'z'; str >= 'a'; str--)
	{
		putchar(str);
		if (str == 'a')
		{
			putchar('\n');
		}
	}
	return (0);
}
