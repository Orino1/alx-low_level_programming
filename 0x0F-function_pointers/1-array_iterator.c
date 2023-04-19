#include "function_pointers.h"
#define NULL 0

/**
 * array_iterator -  a function that executes a function
 * given as a parameter on each element of an array.
 * @arrat: the array
 * @size:  the size of the array
 * @action: is a pointer to the function i need to use
 * Return: void
 **/

void array_iterator(int *array, size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
