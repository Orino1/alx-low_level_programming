#include <stdio.h>
#include <stdlib.h>
/**
 * main - A function print from a to z
 * then A to Z followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letterLower = 'a';

	for (letterLower = 'a'; letterLower <= 'z'; letterLower++)
	{
		if (letterLower != 'e' && letterLower != 'q')
		{
			putchar(letterLower);
		}
		else if (letterLower != 'e' && letterLower != 'q' && letterLower == 'z')
		{
			putchar('\n');
		}
	}
	return (0);
}
