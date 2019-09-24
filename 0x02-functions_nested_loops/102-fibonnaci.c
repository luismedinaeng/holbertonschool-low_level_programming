#include <stdio.h>

/**
 * main - Prints the first 50
 * fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long unsigned int f1 = 1;
	long unsigned int f2 = 2;
	long unsigned int temp = 0;
	int i = 2;

	printf("%lu\n", f1);
	printf("%lu\n", f2);

	while (i < 50)
	{
		temp = f2;
		f2 += f1;
		f1 = temp;
		printf("%lu\n", f2);
		i++;
	}
	return (0);
}
