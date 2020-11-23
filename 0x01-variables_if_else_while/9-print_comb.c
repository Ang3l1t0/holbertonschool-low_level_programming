#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n == '9')
			putchar(n);
		else
		{
			putchar(n);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
