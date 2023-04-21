#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - a function that prints anything.
 * @format: is a list of types of arguments passed to the function
 * Return: VOID
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;
	char *string, *seperator = "";

	va_start(args, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", seperator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", seperator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", seperator, va_arg(args, double));
				break;
			case 's':
				string = va_arg(args, char *);
				if (string == NULL)
				string = "(nil)";
				printf("%s%s", seperator, string);
				break;
			default:
				i++;
				continue;
		}
		seperator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
