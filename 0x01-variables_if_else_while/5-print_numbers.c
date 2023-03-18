#include <stdio.h>
#include <stdlib.h>
/**
 * main - A function all single digit
 * numbers of base 10 starting from 0
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int strtnm = 0;

	for (strtnm = 0; strtnm < 10; strtnm++)
	{
		printf("%d", strtnm);
		if (strtnm == 9)
		{
			printf("\n");
		}
	}
	return (0);
}
