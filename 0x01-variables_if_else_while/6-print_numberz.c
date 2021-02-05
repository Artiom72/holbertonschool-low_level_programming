#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * description - Print numbers 0 to 9
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9 ; n++)
        	putchar(n + '0');

	putchar('\n');
	return (0);
}
