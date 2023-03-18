#include <stdio.h>
#include <stdlib.h>
/**
 * main - A function that prints all possible
 * different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numFirst = 0;

	int numSecond = 0;

	int stepdownum = 0;

	for (numFirst = 0; numFirst <= 9; numFirst++)
	{
		for (numSecond = stepdownum; numSecond <= 9; numSecond++)
		{
			if (numFirst != numSecond)
			{
				putchar('0' + numFirst);
				putchar('0' + numSecond);
				if (numFirst != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		stepdownum++;
	}
	putchar('\n');
	return (0);
}
