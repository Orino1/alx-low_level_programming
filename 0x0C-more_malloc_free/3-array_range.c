#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_range - a function that creates an array of integers.
 * @min: minimum number & included
 * @max: max number & included
 * Return: a pointer to the array of int
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int j = 0;
	int mim = min;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc((max - min) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= (max - min); i++)
	{
		arr[j] = mim;
		mim++;
		j++;
	}
	return (arr);
}
