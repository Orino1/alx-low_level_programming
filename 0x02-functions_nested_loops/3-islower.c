#include "main.h"

/**
 * _islower - A function that check if c
 * is lowercase or uppercase char
 * c - is the char
 * Return: Always 0 (Success)
 */
int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
