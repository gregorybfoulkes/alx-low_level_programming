#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: No return value
 */
void print_alphabet_x10(void)
{
	int counter = 0;
	int letter;

	while (counter++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			putchar(letter);
		}
	putchar('\n');
	}
}
