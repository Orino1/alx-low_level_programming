#include "main.h"
/**
 * puts2 - function that prints every other
 * character of a string
 * @str: string of char
 * Return: void
 */
void puts2(char *str)
{
	int i;

	int leng = 0;

	int onf = 0;

	for (i = 1; *(str + i) != '\0'; i++)
	{
		leng++;
	}
	for (i = 0; i <= leng; i++)
	{
		if (onf == 0 && leng != 0)
		{
			_putchar(str[i]);
			onf++;
		}
		else if (onf == 1 && leng != 0)
		{
			onf--;
		}
	}
	_putchar('\n');
}
