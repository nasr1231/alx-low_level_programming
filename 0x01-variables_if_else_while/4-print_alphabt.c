#include <stdio.h>
/**
 * main - Entry point
 * Description: prints lowercase alphabets
 * Return: Always 0 (success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	if (letter != 'e' && letter != 'q')
	{
	putchar(letter);
	}
	letter++;
	}

	putchar('\n');
	return (0);
}
