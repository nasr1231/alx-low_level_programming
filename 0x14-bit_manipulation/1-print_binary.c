#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary format 0 or 1.
 */
void prints_binary(unsigned long int n)
{
	if (n > 1)
		prints_binary(n >> 1);

	_putchar((n & 1) + '0');
}
