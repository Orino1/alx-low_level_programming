#include "main.h"
#include <stdio.h>
/**
 * main - A function that print argc
 * @argc: arg count
 * @argv: agr vector / array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", (argc - 1));
	return (0);
}
