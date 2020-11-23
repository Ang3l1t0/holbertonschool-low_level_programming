#include "holberton.h"

/**
 * jack_bauer - print 00-00 hour to 23:59
 * Return: always 0
 */
void jack_bauer(void)
{
	int H, m;

	for (H = 0; H <= 23; H++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
