#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - a function that prints strings,
 * followed by a new line.
 * @separator: the string to be printed between strngs
 * @n: is the number of strings passed to the function
 * Return: VOID
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list agrs;

	va_start(agrs, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(agrs, char *);

		if (separator != NULL && i < (n - 1))
		{
			printf("%s%s", str, separator);
		}
		else if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
	}
	printf("\n");
	va_end(agrs);
}
