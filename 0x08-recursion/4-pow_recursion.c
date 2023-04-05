i#include "main.h"
/**
 * _pow_recursion - Write a function that
 * returns the value of x raised to the power of y.
 * @x: a number
 * @y: a number
 * Return: If y is lower than 0, return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
