#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */

int main(void)
{
	char lower, upper;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);
	putchar('\n');
	return (0);
}
