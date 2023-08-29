#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints alphabets in small and capital letters
 *
 * Return: Always 0 for success
 */
int main(void)
{
	int l;

	/* print alphabet in lowercase */
	l = 97;
	while (l <= 122)
	{
		putchar(l);
		l++;
	}

	/* Print alphabet in uppercase */
	l = 65;
	while (l <= 90)
	{
		putchar(l);
		l++;
	}

	putchar('\n');
	return (0);
}
