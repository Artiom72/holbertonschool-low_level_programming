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

	for (n = 0; n <= 9 ; n++)
{
		for (i = 0; i <= 9 ; i++)
{
			if (i > n)
{
				putchar(n + '0');
				putchar(i + '0');
				if (n != 8 || i != 9)
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
