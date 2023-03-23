#include "main.h"

/**
 * _isupper - check the char is uppercase or
 * lower case.
 * @c: char
 * Return: 1 if uppercase 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
