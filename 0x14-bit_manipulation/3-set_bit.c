#include "main.h"
/**
* set_bit - program sets the value of a bit to 1.
* in a particular address
* @n: pointer to an unsigned long int.
* @index: bit index
*
* Return: 1 on success, -1 otherwise
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int st;

	if (index > 63)
		return (-1);

	st = 1 << index;
	*n = (*n | st);
	return (1);
}
