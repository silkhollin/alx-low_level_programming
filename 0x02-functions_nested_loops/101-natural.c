#include <stdio.h>


/*
 * main -  for printing all numbers less than 1024
 * must be multiples of 3 and 5
 * Return: 0 nga bulijjo
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);

	return (0);
}
