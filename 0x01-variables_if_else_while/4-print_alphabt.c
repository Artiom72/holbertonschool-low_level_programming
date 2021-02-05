#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * description - Print alphabet without q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		if (n != 'q' && n != 'e')
			putchar(n);

	putchar('\n');
	return (0);
}
