#include "main.h"

/**
* flip_bits - determines the number of bits to go from num 1 to num 2
* @n: num1.
* @m: num2.
*
* Return: number of bits.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int fbits;

	for (fbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			fbits++;
	}
	return (fbits);
}
