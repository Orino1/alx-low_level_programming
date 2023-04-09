#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - A function that adds positive numbers.
 * @argc: arg count
 * @argv: agr vector / array
 * Return: Always 0 (Success) or 1 error
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int i, j = 0;

		for (i = 1; i < argc; i++)
		{
			int c;

			for (int c = 0; argv[i][c] != '\0'; c++)
			{
				if (!isdigit(argv[i][c]))
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		for (i = 1; i < argc; i++)
		{
			j += atoi(argv[i]);
		}
		printf("%d\n", j);
		return (0);
	}
	printf("0\n");
	return (0);
}
