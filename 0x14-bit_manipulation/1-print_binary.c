#include "main.h"
/**
 * print_binary - creates a binary number
 * @n: number to convert
 * Return: binary number started by one
 */
void print_binary(unsigned long int n)
{
	int tk, j = 0;
	unsigned long int temp, mask = 0;

	if (n == 0)
		_putchar('0');
	temp = n;

	for (j = 0; temp != 0; j++)/* skips left trailing zeroz 8*/
		temp = temp >> 1;

	for (tk = j - 1; tk >= 0; tk--)
	{
		mask = 1 << tk;
		if ((n & mask) != 0)
			_putchar('1');
		else
			_putchar('0');
	}
}
