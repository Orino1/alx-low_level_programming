#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: number of bytes that need to be allocated in memory
 * Return: VOID pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
