#include "main.h"
/**
 * _puts - function that print a str
 * to stdout
 * @str: string of char
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
