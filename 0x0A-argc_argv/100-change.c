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
	int i, j, stp = 0;

	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return(1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	else if (argc == 2)
	{
		int baki = atoi(argv[1]);

		int sum = 0;

		for (i = 0; i < 5 && stp == 0; i++)
		{
			for (j = 0; stp == 0 ; j++)
			{
				baki = baki - cents[i];
				sum = sum + 1;
				if (baki == 0)
				{
					stp = 1;
					break;
				}
				else if (baki < 0)
				{
					baki = baki + cents[i];
					sum = sum - 1;
					break;
				}
			}
		}
		printf("%d\n", sum);
		return (0);
	}
}