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
	int n, i;

	for (n = 0; n <= 99 ; n++)
{
		for (i = 0; i <= 99 ; i++)
{
			if (i > n)
{
				putchar(n / 10 + '0');
				putchar(n % 10 + '0');
				putchar(' ');
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				if (n != 98 || i != 99)
{
					putchar(',');
					putchar(' ');
}
}
}
}
	putchar ('\n');
	return (0);
}
