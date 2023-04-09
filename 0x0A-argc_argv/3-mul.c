#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - A function print the result of the
 * multiplication, followed by a new line
 * @argc: arg count
 * @argv: agr vector / array
 * Return: Always 0 (Success) or 1 error
 */
int main(int argc, char const *argv[])
{
	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	int sum = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", sum);
	return (0);
}
