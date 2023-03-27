#include "main.h"
/**
 * swap_int - function that swap
 * the value of two int
 * @a: int
 * @b: int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	const int i = *a;

	const int j = *b;

	*a = j;

	*b = i;
}
