#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
#include <stdbool.h>

int _atoi(char *s) {
	bool negative = false;
	int result = 0;
       
	while (*s == ' ')
		s++;
	
	if (*s == '-' || *s == '+')
	{
        negative = (*s == '-');
        s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		int digit = *s - '0';

        if (negative)
	{
		if (result < (INT_MIN + digit) / 10)
			return INT_MIN;

        } else {
            if (result > (INT_MAX - digit) / 10)
                return INT_MAX;
        }

        result = result * 10 + digit;
        s++;
    }

    return negative ? -result : result;
}
