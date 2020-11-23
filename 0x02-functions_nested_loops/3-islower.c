#include "holberton.h"

/**
 * _islower - function that checks for lowercase character
 * @c: character to check
 * Return: On success 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
