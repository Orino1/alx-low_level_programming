#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: number of element of the array
 * @size: size of each element in the array
 * Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
