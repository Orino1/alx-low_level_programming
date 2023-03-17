#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A function that deter if the number
 * n is positive or negative or a zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lst;

	lst = n % 10;

	if (lst > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lst);
	}
	else if (lst == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lst);
	}
	else if (lst < 6 && lst != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst);
	}
	return (0);
}
