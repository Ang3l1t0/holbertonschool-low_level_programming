#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 100 ; i++)
{
		if ((i / 10) + 0 < (i % 10) + 0)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');

			if ((i / 10) + 0 < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
