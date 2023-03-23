#include <stdlib.h>
#include <stdio.h>

/**
 * main - numbers from 1 to 100,
 * followed by a new line.
 * Return: always 0 as sucs
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
			if (i != 100)
				printf(" ");
		}
		else if ((i % 3) == 0 && (i % 5) != 0)
		{
			printf("Fizz");
			if (i != 100)
				printf(" ");
		}
		else if ((i % 5) == 0 && (i % 3) != 0)
		{
			printf("Buzz");
			if (i != 100)
				printf(" ");
		}
		else
		{
			printf("%d", i);
			if (i != 100)
				printf(" ");
		}
	}
	printf("\n");
	return (0);
}
