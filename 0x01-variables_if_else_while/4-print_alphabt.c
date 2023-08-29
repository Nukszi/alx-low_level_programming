#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase
 *
 * Description: This program prints all lower case alphabets except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l;

	/* start from a */
	l = 'a';

	while (l <= 'z')
	{
		if (l == 'q' || l == 'e')
		{
			l++;
			continue;
		}
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
