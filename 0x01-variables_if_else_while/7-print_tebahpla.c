#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * description - Print numbers 0 to 9 like chartype
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a' ; n--)
		putchar(n);

	putchar ('\n');
	return (0);
}
