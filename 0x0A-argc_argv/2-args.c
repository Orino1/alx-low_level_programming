#include "main.h"
#include <stdio.h>
/**
 * main - A function that prints all arguments it receives.
 * @argc: arg count
 * @argv: agr vector / array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", (argv[i]));
	}
	return (0);
}
