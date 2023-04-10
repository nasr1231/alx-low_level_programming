#include "main.h"

/**
 * print_binary - printing the binary representation of a number.
 * @n: the number to be printed in binary 0 or 1.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	unsigned int bits = sizeof(n) * 8;

	while (bits--)
	{
		if ((n >> bits) & mask)
			break;
	}
	while (bits--)
	{
		unsigned long int bit = (n >> bits) & mask;
		_putchar(bit + '0');
	}
}

