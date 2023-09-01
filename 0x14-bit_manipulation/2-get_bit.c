#include "main.h"
/**
* get_bit - returns the value of a bit at a given
* index.
* @n: unsigned loong int input
* @index: bit ibdex
*
* Return: value of the bit.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int tk;

	if (n == 0 && index < 64)
		return (0);
	for (tk = 0; tk <= 63; n >>= 1, tk++)
	{
		if (index == tk)
		{
			return (n & 1);
		}
	}
	return (-1);
}
