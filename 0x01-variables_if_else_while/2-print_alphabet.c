#include <stdio.h>
#include <stdlib.h>
/**
 * main - A function print from a to z
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
		if (letter == 'z')
		{
			putchar('\n');
		}
	}
	return (0);
}
