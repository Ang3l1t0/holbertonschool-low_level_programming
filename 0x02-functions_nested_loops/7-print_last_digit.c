#include "holberton.h"

/**
 * print_last_digit - print last digit of a number
 * @n: number to be checked
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = n * -1;
	}
	_putchar(n + '0');
	return (n);
}
