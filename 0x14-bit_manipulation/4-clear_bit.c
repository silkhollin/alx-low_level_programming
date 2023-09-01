#include "main.h"

/**
* clear_bit - program sets bit value to 0
* @n: address for unsigned int
* @index: bit index
*
* Return: 1 on success, -1 otherwise
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int res;

	if (index > 63)
		return (-1);
	res = 1 << index;

	if (*n & res)
		*n ^= res;
	return (1);
}
