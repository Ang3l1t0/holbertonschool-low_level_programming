#include "holberton.h"

/**
 * _abs - absolute value of an integer
 * @n: integer to be checked
 * Return: 1 on success
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
