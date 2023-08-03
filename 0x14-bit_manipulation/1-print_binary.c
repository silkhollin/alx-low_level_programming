#include "main.h"
/**
* print_binary - program prints the binary representation
* of a number.
* @n: unsigned long int.
*
* Return: no return.
*/

void print_binary(unsigned long int n)
{
	int i, ct = 0;
	unsigned long int curr;

	for (i = 63; i >= 0; i--)
	{
		curr = n >> i;

		if (curr & 1)
		{
			_putchar('1');
			ct++;
		}
		else if (ct)
			_putchar('0');
	}
	if (!ct)
		_putchar('0');
}

