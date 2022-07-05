#include "main.h"

/**
 * _islower - controls if character is lowercase
 * @c: character to be verified
 * Return: 1 if c is lowercase else return 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	};

	return (0);
}
