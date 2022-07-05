#include "main.h"

/**
 * _abs - prints the absolute value of a number
 * @i: number targeted
 * Return: return 0 (success)
 */
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (0);
	}
}
