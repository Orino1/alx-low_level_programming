#include <stdio.h>
/**
 * main - will print a teh size of evrey type of data available
 * Return: will return 0 as the program runs successfully
*/
int main(void)
{
	printf("Size of a char: %lu byte(s)\n",sizeof(char));
	printf("Size of an int: %lu byte(s)\n",sizeof(int));
	printf("Size of a long int: %lu byte(s)\n",sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n",sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n",sizeof(float));
	return (0);
}
