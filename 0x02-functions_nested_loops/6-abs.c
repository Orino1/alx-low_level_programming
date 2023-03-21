#include "main.h"

/**
 * _abs - A function function that
 * prints the abs of a number.
 * @n: is a number
 * Return: n or sum
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return n;
	}
	else
	{
		int sum = n * -1;
		return sum;
	}
}
