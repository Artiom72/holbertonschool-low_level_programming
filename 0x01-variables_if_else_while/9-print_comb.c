#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * description - Print numbers base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9 ; n++)
{
		putchar(n + '0');
		if (n != 9)
{
			putchar(',');
			putchar(' ');
}
}
	putchar ('\n');
	return (0);
}