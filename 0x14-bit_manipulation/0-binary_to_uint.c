#include "main.h"
/**
 * binary_to_uint - creates an unsigned int
 * @b: pointer to a binary string
 * Return: an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	if (!b)
		return (0);

	for (i = 0; *(b + i) != '\0'; i++)
	{
		if (*(b + i)  == '1')
			num = (num << 1) | 1;/* make a displacement after inserting 1 */
		else if (*(b + i) == '0')
			num <<= 1;
		else
			return (0);
	}
	return (num);
}
