#include "function_pointers.h"
#define NULL 0

/**
 * print_name - a function that prints a name.
 * @name: String
 * @f: Pointer to a function
 * Return: void
 **/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		(*f)(name);
	}
}
