#include "holberton.h"
/**
 * times_table - prints
 * @n,c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (b == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if ((a * b) <= 9)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((a * b) / 10 + 48);
				}
				_putchar((a * b) % 10 + 48);
			}
		}
		_putchar('\n');
	}
}
