#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - a function that prints numbers,
 * followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * Return: VOID
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list agrs;

	va_start(agrs, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%d%s", va_arg(agrs, int), separator);
		}
		else
		{
			printf("%d", va_arg(agrs, int));
		}
	}
	printf("\n");
	va_end(agrs);
}
