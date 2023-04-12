#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - a function that allocate mem for an array
 * @size: size of the array
 * @c: type of data ( Char in this case )
 * Return: If n does not have a natural
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	char *p = (char *) malloc((size) * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		if (p != NULL)
		{
			*(p + i) = c;
			i++;
		}
		else
		{
			return (NULL);
		}
	}
	return (p);
}
