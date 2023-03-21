#include "main.h"

/**
 * _isalpha - A function that check if c
 * is lowercase or uppercase char
 * @c: is a iether a variable or degit
 * Return: Always 0 (Success)
 */
int _isalpha(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
