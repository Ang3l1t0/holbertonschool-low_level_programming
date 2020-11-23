#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */

int main(void)
{
	char lower;

	for (lower = 'z'; lower >= 'a'; lower--)
		putchar(lower);
	putchar('\n');
	return (0);
}
