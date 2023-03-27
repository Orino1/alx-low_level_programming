#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints
 * int from an array
 * @a: pointer to an array
 * @n: number of elements that should be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
