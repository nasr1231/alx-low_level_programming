#include "main.h"

/**
 * print_binary - printg the binary represeantation of a number 0 or 1.
 * @n: a string of 0 and 1 chars
 *
 */

void print_binary(unsigned long int n)
{
	int printing_bin = ((n & 1) + '0');

	if (n > 1)
	{
		print_binary((n >> 1));
	}
	_putchar(printing_bin);
}
