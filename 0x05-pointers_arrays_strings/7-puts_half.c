#include "main.h"
/**
 * puts_half - function that prints half
 * of the string
 * @str: string of char
 * Return: void
 */
void puts_half(char *str)
{
	int i;

	int leng = -1;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		leng++;
	}
	if ((leng % 2) == 0)
	{
		for (i = (leng / 2) ; i <= leng; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = ((leng - 1) / 2) ; i <= leng; i++)
		{
			_putchar(str[i]);
		}
	}
}
