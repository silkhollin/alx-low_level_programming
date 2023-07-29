#include <stdio.h>

/**
 * p_main - function executed before main
 * Return: returns nothing
 */

void __attribute__ ((constructor)) p_main()
{
	printf("You're beat! and yet, you must allow, \n");
	printf("bore my house upon my back!\n);
}
