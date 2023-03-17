#include <stdio.h>
#include <stdlib.h>
/**
 * main - A function print from a to z
 * then A to Z followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letterUpper = 'A';

	char letterLower = 'a';

	for (letterLower = 'a'; letterLower <= 'z'; letterLower++)
	{
		putchar(letterLower);
	}
	for (letterUpper = 'A'; letterUpper <= 'Z'; letterUpper++)
	{
		putchar(letterUpper);
		if (letterUpper == 'Z')
		{
			putchar('\n');
		}
	}
	return (0);
}
