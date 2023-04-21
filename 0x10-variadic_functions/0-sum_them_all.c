#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all
 * its parameters.
 * @n: number of argmunts
 * Return: the results
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	va_list agrs;

	int result = 0;

	va_start(agrs, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		result += va_arg(agrs, int);
	}
	return (result);
}
