#include "main.h"
#include <stdio.h>
/**
 * _abs - value absolute
 *
 * @n: integer to print
 * Return: return nothing
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}
