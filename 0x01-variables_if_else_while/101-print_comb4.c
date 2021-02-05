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
	int n, i, j;

	for (n = 0; n <= 9 ; n++)
{
		for (i = 0; i <= 9 ; i++)
{
			for (j = 0 ; j <= 9 ; j++)
{
				if (n < i && i < j)
{
					putchar(n + '0');
					putchar(i + '0');
					putchar(j + '0');
					if (n != 7 || i != 8 || j != 9)
{
						putchar(',');
						putchar(' ');
}
}
}
}
}
	putchar ('\n');
	return (0);
}
